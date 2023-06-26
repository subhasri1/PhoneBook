#include<iostream>
using namespace std;
class A
{

public :
    void m()
    {
  cout<<"parent\n";
    }

};
class B:public A
{
public:
    void m(int x)
    {
        cout<<"child\n";
    }
};

main()
{
    A a,*ptr;
    B b;

//    a.m(2);  //error non matching for a
//   b.m();   //error non matching for b

//ptr->m(8);     // throgh parent pointer cannot call child method

    ptr=new B();

    ptr->m(2);
}
