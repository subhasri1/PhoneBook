#include <iostream>
//#include <sstream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
void SearchByNumber(long long a){
    ifstream fin;
    //ofstream fout;
    fin.open("list1.txt");

    long long key;
    string value;

map <long long, string> params; // errors
while ( fin >> value >> key ){
    params[key] = value; // input them into the map
}
    map<long long ,string>::iterator itr;
    itr=params.find(a);
    if(params.count(a)==0)
        cout<<"Contact do not exist"<<endl;
        else
     cout<<itr->second<<" "<<itr->first;

fin.close();

}

//int main(){
  //  long long a;
    //cin>>a;
   // SearchByNumber(a);

//return 0;
//}






