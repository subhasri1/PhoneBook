#include<iostream>
using namespace std;
class A
{
public:
    int a=10,b;
    operator int()
{
    return b;
}
};

main()
{
   int x;
   A a;
   x=a;
   cout<<x;



}
