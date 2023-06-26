#include<iostream>
//#include<cstring>
#include<string>
//#include<bits/stdc++.h>
//#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

main()
{
     int a;
     cin>>a;
    string s=to_string(a);
//    cout<<" Insert a NO: "<<endl;
//    int a;
//    cin>>a;

    //cout<<a<<endl;

   // string s;
    //s=to_string(a);
    //char *ptr;
   // strcpy(ptr,s.c_str());

  //  string k=reverse(s.begin(),s.end());

    //cout<<s;

   reverse(s.begin(),s.end());
   cout<<s;

}
