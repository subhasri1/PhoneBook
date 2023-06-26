#include<iostream>
using namespace std;
int a=10;
void const m()
{  a=90;
    cout<<"Abhishek Raj Singh:";
}
main()
{
    const void (*func)();
    func=m;
    func();

}
