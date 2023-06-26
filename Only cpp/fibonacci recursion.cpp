#include<iostream>
using namespace std;
int a=1;
    int b=1;
int  fibo(int x)
{
     if(x==0)
     {
        cout<<a<<endl;
        return a;
     }

        else{


cout<<fibo(x-2)+fibo(x-1)<<endl;
return fibo(x-2)+fibo(x-1);
        }
}
main()
{


}
