#include <iostream>
//#include <npos>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
void SearchByName(string s){
    ifstream fin;
    //ofstream fout;
    fin.open("list1.txt");
    //fout.open("list1.txt");

    string key;
    long long value;

map <string, long long> params; // errors
while ( fin >> key >> value ) {
    params[key] = value; // input them into the map
}
    map<string,long long>::iterator itr;
    itr=params.find(s);


    if(params.count(s)==0)
        cout<<"NO RESULT FOUND";
    else
    cout<<itr->first<<" " <<itr->second;

fin.close();
//fout.close();
}

//int main(){
 //   string s;
  //  cin>>s;
  //  SearchByName(s);

//return 0;
//}






