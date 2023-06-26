#include<iostream>
using namespace std;
class A
{
    int a=10;
    static void m1()
    {
       cout<<"before constructor static method"<<endl;
    }
    void m()
    {
        cout<<"Before constructor:"<<endl;
    }
public:
    A()
    {
        m1();
        m();      //If we call any method inside nconstructor no need to have object refence even this-> also not reqiured  for static method also
        cout<<a<<endl;
        a=25;
        cout<<a;
    }
};
main()
{
    A a;

}
