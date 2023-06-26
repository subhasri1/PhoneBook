#include<iostream>
using namespace std;

class A
{
public:
    ~A()
    {
        cout<<"distructor";

    }

};
void m()
{
    A c;
}
main()
{
    A *a=new A();


    a=new A();
   delete a;

   m();

    while(0)
    {

    }
}
