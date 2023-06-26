#include<iostream>
using namespace std;

class A
{
private :
    const int x=0;
public:


   virtual void m1()
    {
        cout<<"without parameter\n";

    }
    virtual void m1(int x,int y)
    {
        cout<<"with parameter\n";
    }
};

class B:public A
{
public:
    void m1()
    {
        cout<<"child m1";
    }
};
main()
{

    A *a;
    B b;
    a=&b;
    a->m1();
    a->m1(2,2);
}
