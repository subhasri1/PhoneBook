#include<iostream>
using namespace std;
class A
{

public:
    A(int a,int b)
    {


    }
};

class B:public A
{
    public:
    B(int a,int b):A(2,3)
    {

    }

};

int main()
{
   // A &d=&new B(2,9);
    B &b=new B(7,0);
}

