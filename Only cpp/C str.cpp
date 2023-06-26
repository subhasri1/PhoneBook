
#include<iostream>
#include<string>
#include<string.h>
#include<cstdio>

using namespace std;

 char * m(string s, char a[])
{



    for(int i=0;i<=(s.size()+1);i++)
    {
        if(i>s.size())
             a[i]=NULL;
        else
        a[i]=s[s.size()-(i+1)];

    }
    cout<<a<<endl;
    return a;
}
main()
{

    string s;
    cout<<"Enter String:";
    getline(cin,s);
    cout<<s<<endl;
char a[s.size()+1];

  char * p="bdsbj";   ///ok


  //char *k={'a','i','w'}   Not Ok

        char j[]="jden";  ///ok

        char h[]={'a','b','c'}; ///Ok

        cout<<j<<endl;

        cout<<h<<endl;

     char *ptr=m(s,a);

      char y[s.size()+1];
      strcpy(y,ptr);

     // strc);

  cout<<ptr;
  cout<<(y==s);
      cout<<true;   ///ok

     //cout<<y;


}
