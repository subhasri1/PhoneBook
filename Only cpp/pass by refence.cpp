#include<iostream>
using namespace std;


//void m(int &a,int &b)
//{
//    cout<<"a="<<a<<endl;
//    cout<<"b="<<b;
//}

void m1(int a,int b)
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}
main()
{
    int a=4,b=5;

   // m(3,4);   //error don allow to pass value directly in call by refence

   //m(a,b);       //ok called by passing refence

    m1(2,4);
    m1(a,b);
}
