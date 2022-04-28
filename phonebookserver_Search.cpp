#include <iostream>
using namespace std;
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <cstring>
#include "search.h"

int main()
{

	//socket creation
	int serv_fd = socket(AF_INET,SOCK_STREAM,0);
	if (serv_fd == -1)
	{
		perror("socket creation error");
		exit(1);
	}
	//initialize the socaddr_in structure
	struct sockaddr_in sock_addr_serv;// sockaddr_in for IPV4
	sock_addr_serv.sin_family = AF_INET;
	sock_addr_serv.sin_port = 9988;
	sock_addr_serv.sin_addr.s_addr = inet_addr("127.0.0.1");

	//bind the socket with ip address and port
	if (bind(serv_fd,(struct sockaddr *)&sock_addr_serv,sizeof(sock_addr_serv))==-1)
	{
		perror("bind error");
		exit(1);
	}

	// listening (waiting) for client request
	if (listen(serv_fd,2)==-1)
	{
		perror("listen error");
		exit(1);
	}

	while (1)
	{
		cout << "server waiting for client to connect"  << endl;
		
		//accepting client request
		struct sockaddr_in sock_addr_cli;
		socklen_t cli_len = sizeof(sock_addr_cli);
		int client_fd=accept(serv_fd,(struct sockaddr *)&sock_addr_cli,&cli_len);
		
		if (client_fd==-1)
		{
			perror(" accept error");
			exit(1);
		}
		
		char ch[100],ch1[10],opt[10];
		int n = recv(client_fd,opt,sizeof(opt),0);
		opt[n]='\0';
		write(1,opt,strlen(opt));
		send(client_fd,"Received Phoneno-",18,0);
		cout << endl;
		
		if (strcmp(opt,"-s")==0)//search by name
		{       
			n = recv(client_fd,ch,sizeof(ch),0);
			ch[n]='\0';
			if(strcmp(ch,"-n")!=0)
			{
			write(1,ch,strlen(ch));
			cout << endl;
			string name=ch;
			long long num=SearchByName(name);
			//cout << "num" << num << endl;
			string s = to_string(num);
		//	cout << "s" << s << endl;
			
			char data[12];
			strcpy(data,s.c_str());
			cout <<"data" <<  data << endl;
			write(1,data,sizeof(data));
			int m =send(client_fd,data,sizeof(data),0);
			bzero(ch,sizeof(ch));	
			bzero(data,sizeof(data));	
		}

                     else
		     {
                          n = recv(client_fd,ch1,sizeof(ch1),0);
                          long long a=stoll(ch1);
                          string s= SearchByNumber(a);
	                  char data1[s.size()];
                          strcpy(data1,s.c_str());
			  data1[s.size()]='\0';
                           cout<<data1<<endl;
                           int m=send(client_fd,data1,sizeof(data1),0);
                           bzero(ch1,sizeof(ch1));
                           bzero(data1,sizeof(data1));			   




                    }

		}
			
	}

	//close socket
	if (close(serv_fd)==-1)
	{
		perror("socket close error");
		exit(1);
	}
}

