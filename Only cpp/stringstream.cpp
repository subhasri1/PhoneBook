#include<iostream>
#include<sstream>
using namespace std;
main()
{
    stringstream ss;
    ss<<89<<" Raj "<<92828;
    cout<<ss.str()<<endl;     ///str() is used convert entire stream data into a single string object.
    string s,s1,s2;
    ss>>s;;
    //s=s.concat(ss>>s);
    while(!ss.eof())
    {
        ss>>s;
    }

    cout<<s;
}
