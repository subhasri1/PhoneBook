#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    A(int x,int y=3)
    {
      a=x;
      b=y;
    }
};
main()
{
  int x=10;
  A *a=new A(3);
  //a->a=x;
  cout<<a->a<<endl<<a->b;
}
