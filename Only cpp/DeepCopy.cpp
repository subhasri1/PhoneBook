#include<iostream>
using namespace std;

class A
{
    public:
    int b;
   // A *c=new A() ;
  A(int x)
  {
    this->b=x;
  }
 A()=default;
 int m1()
 {
     return this->b;
 }
};

class B//:public A
{
    public:
      int c=10;
     A &a=*new A(5);


    void m()
    {
        cout<<a.m1();;
    }

};
class C
{  public:
   B &b=*new B();
   void m2()
   {
       b.m();
   }
};
main()
{
   C c;
   c.m2();
   // d.m();

}
