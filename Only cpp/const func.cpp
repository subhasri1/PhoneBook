#include<iostream>
using namespace std;

class A
{
   public :
       int a=10;

       static int m ()const
       {
           //cin>>a;
           a=20;      ///Any variable  inside a const function act as read only variable and cannot be modified from here.
           cout<<a;
       }
};

main()
{
    A a;
    a.m();
}
