#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
void Delete(string s){
    ifstream fin;
    ofstream fout;
    fin.open("list1.txt");


    string key;
    long long value;

map <string, long long> p;
while ( fin >> key >> value ) {
    p[key] = value; // input them into the map
}
    map<string,long long>::iterator itr;
    if(p.count(s)==0)
        cout<<"Contact do not exist"<<endl;
    else
   p.erase(s);
fout.open("list1.txt",ios::out);
    for(itr=p.begin();itr!=p.end();itr++)
   fout<<itr->first<<" "<<itr->second<<endl;
fout.close();
}
/*
int main(){
  string d;
  cin>>d;
  Delete(d);
return 0;
} */
