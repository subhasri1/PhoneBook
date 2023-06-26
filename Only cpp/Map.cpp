
#include<iostream>
#include<map>
#include<string>
using namespace std;

main()
{
    map<int,string> a{{100,"Abhishek"},{101,"raj"}};
map<int,string>::iterator itr=a.begin();
    cout<<itr->first<<endl;

    string s("hello");
    string s1="hello";
    int i=s1==s;
cout<<s1.compare(s);

}
