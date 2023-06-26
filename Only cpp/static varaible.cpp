#include<iostream>

using namespace std;

class A
{
public:
    int b=0;
    static const int  a;
   static int c;
     void m()const{
    cout<<c;             ///static variable can be accessed inside non static method directly
    }
};
//int A::a=10;

main()
{ //A::a=20;   //we cannot modify the value of a as it is a read only constant variable.
    //cout<<A::a;
    cout<<A::c;
}
