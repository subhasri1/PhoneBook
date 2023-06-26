#include<iostream>
using namespace std;
class A
{
    public:
    void m()
    {
        class C{

    public:
        C()
        {
            char c;
            cout<<c<<endl;
            cout<<"Inside C class"<<endl;
        }

        ~C()
        {
            cout<<"Inside C class  ends";
        }
        };
        C c;

        while(1)
        {

        }
    }
};
main()
{
   A a;
   a.m();

}
