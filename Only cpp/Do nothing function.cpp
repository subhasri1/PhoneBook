#include<iostream>
using namespace std;
class A
{
public:
    virtual void m()=0;
};
class B:public A
{

     void m()          //scope of overiden method is reduced but act as public method only can be called outside classs withod getter method
     {
  cout<<"runuen";
     }
};
main()
{   A *a=new B;
    a->m();
}
