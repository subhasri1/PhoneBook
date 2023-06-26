
#include<iostream>
using namespace std;

enum color
{

    red=89,blue,green


};


main()
{
color r,r1;
unsigned char ch;
int a='A'+'A';
cout<<a<<endl;
r=red;

color &d=*(new color(red));   // enum can be called by new operator musing basic constructor

cout<<r<<'\n';
cout<<blue;  // we can pass only enum type of object and it will take default value for denotion here blue=90 as red=89(first object) bydefauilt red =0

}
