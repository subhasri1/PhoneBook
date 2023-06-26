#include<iostream>
#include<map>
#include<fstream>
using namespace std;

main()
{
    ofstream fout;
    fout.open("abc.txt");
    map<int,string> a;
    pair<int,string> k;
    for(int i=0;i<20;i++)
    {

        cout<<"Enter String:\n";
      string s;
      cin>>s;
k=make_pair(i,s);
    a.insert(k);


    }
    map<int,string>::iterator itr=a.begin();
    while(itr!=a.end())
    {
         cout<<itr->second<<endl;
         itr++;
         fout<<itr->second<<" ";
    }



}
