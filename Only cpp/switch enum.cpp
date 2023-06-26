#include<iostream>
using namespace std;

enum color
{

    red=89,blue,green


};
main()
{


color &r=*(new color(blue));
r=blue;
 switch(r)
 {
 case red:
    cout<<"its red"<<endl;
    break;

     case blue:
    cout<<r<<endl;
    break;
 }


}
