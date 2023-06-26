
#include<iostream>
using namespace std;

main()
{
    int **p;
    int nr,nc,r=0,c=0;
    cout<<"Enter  No. of rows and columns"<<endl;
    cin>>nr>>nc;
    p=new int*[nr];

    for(;r<=nr;r++)
    {
        p[r]=new int [nc];
    }
    r=0;
    for(;r<=nr;r++)
    {
        for(;c<nc;c++)
        {
            p[r][c]=c;
        }
        c=0;
    }
    cout<<*(*p+3);

}
