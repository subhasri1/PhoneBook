#include<iostream>
using namespace std;


class A
{
public:
    virtual void m()
    {
        cout<<"Parent method"<<endl;
    }
};
class B:public A
{
public:
    void m(int x)
    {
        cout<<"child method";
    }
};

main()
{
   // cout<<A::vptr<<endl;
     A *a=new B();
     B b=*new B;
     b.m(2);
    a->m();  //  //even if late binding done  but from parent pointer parent method call through parent pointer cant call method hiding method.
    //               like here we can call m() but cant m(int x) from parent pointer even if m() is virtual
    //            and even if m() is not virtual then also from parent only parent method called
}
