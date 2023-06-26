#include<iostream>
using namespace std;
class A
{
private:
    A(){
        cout<<"Abhishek";
    }
protected:
    A(int a)
    {
        cout<<"Abhishek";
    }
};
class B:public A
{
public:
    B(int x):A(3)
    {
 //A a;                  //INSIDE child also private const of base not accessible
    }
   // A a;
};
main()
{
    B b(3);
    /*
A a;     Here constructor can be declaed private but cannot be called from main method So object cant be made
  */

  //A a(2);  //Similarly protected member also cant be called from main
}
