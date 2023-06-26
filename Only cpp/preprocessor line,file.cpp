#include<iostream>
#line 90 //"abc.txt"   //here ac.txt is optional if not provided then name of current file given
//#file //"abd.txt"
#include "static_block.hpp"

using namespace std;
static_block
{
    std::cout<<"in static bock"<<endl;
}
class A
{
public :
    int a=10;
    static int b;
};
int A :: b=10;
//static int m const()    //here static const combination not allowed
//{
//
//}
/*//int A::a=90;   // we can not access public var outside class using global access resolution operator*/


void m()
{
    cout<<A::b;
}
main()

{
    WAIT_CHILD;
    m();
    cout<<__LINE__<<endl;
    cout<<__FILE__<<endl;

    cout<<__TIME__<<endl;

    cout<<__DATE__;
}
