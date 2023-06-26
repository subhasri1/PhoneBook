#include<iostream>
using namespace std;


void m(int x)
{ int sum=0,sum2=1,temp;

while(1)
{
    temp=x%10;
    x=x/10;

    while(1)
    {
        sum2=sum2*temp;
        temp--;
        if(temp<=1)
        break;
    }
    sum=sum+sum2;
    sum2=1;
if(x==0)
        break;

}
   cout<<sum;
}
main()
{
    m(145);
}
