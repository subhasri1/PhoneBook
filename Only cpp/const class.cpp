#include<iostream>
using namespace std;
 class A       //we cannot make a class const because in c++ const is only applied to object or function
{
public :
     int (*ptr)();
    int  m()
    {
        cout<<"Abhishek Raj Singh";
        return 0;
    }

};


main()
{  A a;
  a.ptr=(a.m);
}
