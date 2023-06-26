#include<iostream>
#include<cmath>
#include<string>
using namespace std;


string m(int x)
{
    int b=x;
    int sum=0,c=0;
    while(1)
    {
        sum=sum+x%10;
        x=x/10;
        c++;
        if(x<=0)
            break;
    }
    sum=pow(sum,c);

    cout<<sum<<endl;
    if(sum==b)
        return "yes it is armstrong no";
        else
            return
           "No it is not a armstrong no";
}
main()
{int a;
cin>>a;
  cout<<m(a) ;
}
