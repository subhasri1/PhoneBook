#include<iostream>
using namespace std;

class A
{
  public:
      int a;


static const void m(A &j)     // static constant combination is ok
{
j.a=10;                        //instance member can only be accessed inside static function using class object
}


};
main()
{  A &a =*new A();
    a.m(a);
}
