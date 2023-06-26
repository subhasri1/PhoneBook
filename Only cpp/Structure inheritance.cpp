#include<iostream>
using namespace std;

struct A
{

    int a=10;
    A()
    {
        cout<<"Ajisijdi\n";
    }

};

struct b:public A
{
    b(int x,int y):A()
    {
        cout<<a<<y;
    }

};
int main()
{
    b c(2,3);
}
