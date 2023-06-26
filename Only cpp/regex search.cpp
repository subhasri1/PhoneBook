#include<iostream>
#include<regex>
using namespace std;

main()
{
    string s;
    regex e("abc");
            regex e1("^abc.");  /// It checks abc present begining in string or not
            regex e2("abc$");

    while(true)
    {
        cin>>s;
        bool match=regex_search(s,e2);   //It only catchesb that regex string is present or not fronm ! st position.
        cout<<(match?"Matched:":"Not Matched")<<endl;

    }

///C++ bydefault uses ECMA scrpit for standard grammar of regex
}
