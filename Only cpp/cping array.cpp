#include<iostream>

using namespace std;

main()
{
    int a[]={1,2,3,4,5,6,7,8,9};

    int b[sizeof(a)/sizeof(int)];

    memcpy(b,a,sizeof(a));

    for(int c:b)
        cout<<c;

}
