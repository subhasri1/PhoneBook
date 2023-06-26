#include<iostream>
using namespace std;
void swap1(int &x,int &y)
{
    x=x+y;
    y=x-y;

    x=(x-y);;
}
main()
{//int k=-19;
     //unsigned int j=9999999999999;

    // if(k>j)     //during comparison k changes from signed int to unsigned int and it becomes greater than j
     //   cout<<k;
        int a=90,b=100;
        swap1(a,b);
        cout<<"a="<<a<<"b="<<b<<endl;
}
