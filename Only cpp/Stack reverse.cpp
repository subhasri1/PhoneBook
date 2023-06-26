#include<iostream>
#include<stack>
using namespace std;

main()
{
    stack<char> a;
    string s="Abhishek";

    for(int i=0;i<s.size();i++)
    {
        a.push(s[i]);
    }
    while(a.size())
    {
        cout<<a.top();
        a.pop();
    }
}
