#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
//This code is to delete data from file by number..
  void DeleteByNumber(long long int s){
    ifstream fin;
    ofstream fout;
    fin.open("contact.txt"); // file will be replaced by original data containing file.

   // string line;
    long long int key;
    string value;

map <long long int, string> params;
while ( fin >> value >> key ) {
    params[key] = value; // input them into the map
}

    map<long long int,string>::iterator itr;
    if(params.count(s)==0)
        cout<<"Contact do not exist"<<endl;
    else
   params.erase(s);

fout.open("contact.txt",ios::out);
    for(itr = params.find(0);itr!=params.end();itr++)
    fout<<itr->second<<" "<<itr->first<<endl;

    //<<" " <<itr->second<<endl;

//fin.close();
fout.close();
}
/*
int main(){
  long long int d;
  cin>>d;
  DeleteByNumber(d);
return 0;
} */
