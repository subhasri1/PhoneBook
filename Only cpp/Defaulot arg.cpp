#include<iostream>
using namespace std;

void m(int x,int y,int z=0)
{
   cout<<x<<endl;
    cout<<y<<endl;
     cout<<z<<endl;
}
main()
{
    m(1);  ///we must provide value to every arg of function either thrugh default or passing value compiler automatically will not assign any value to args
}
