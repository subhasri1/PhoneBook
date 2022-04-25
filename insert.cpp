#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
void Insert( long long   a, string s)
{     //a=7292904094;
    ifstream fin;
    fin.open("insert.txt");

     long long key;
    string value;
    map <long long , string> params;

    while(fin>>value>>key){
        params[key]=value;
    }
    ofstream fout;
     map<long long,string>::iterator itr;

   if(to_string(a).size()!=10){    //To check lenth of number     1,2,3,4,5,6
       cout<<"Invalid Number";
    }
    else
        if(params.count(a)!=0)    //check no already exist or not
    {
        cout<<"Contact  already exist"<<endl;

    }
    else
    {
         params.insert( pair<long long int, string>(a,s) );
            fout.open("insert.txt");
         for(itr=params.begin();itr!=params.end();itr++)
            fout<<itr->second<<" "<<itr->first<<endl;

         }


}
/*
int main(){
    string s1;
    long long a1;
    cin>>s1;
    cin>>a1;
    Insert(a1,s1);


}*/
