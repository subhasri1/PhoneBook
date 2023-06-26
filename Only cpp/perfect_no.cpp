#include<iostream>

using namespace std;

void perfect(int x)
{
    int sum=0,i=1;
    while(1)
    {



        if(x%i==0)
        {
           sum=sum+i;
        }


        i++;

        if(i>x/2)
         break;

    }
    cout<<sum;
}
main()
{
    perfect(6);
}
