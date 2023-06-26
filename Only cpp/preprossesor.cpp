#include<iostream>
#define Num 5
#define str(x)#x
#define Min( x, y)((x<y)?x:y)
using namespace std;

void m(int x)
{
    for(int i=0;i<5;i++)
        x++;

    cout<<x;
}
main()
{

    int a=10,b=9;

    cout<<Num<<endl;   // here we can only use Num as constant but we cannot modify value of Num


    cout<<str(2)<<endl;  //str(2)  //here we can pass runtime value of parameter x of macro directly pass value or pass refence here
    //parameter which is passed is treated as string or character


    //str simply contains the address of variable so it is a const char *.

    cout<<"Min no is :"<<Min(a,b)<<endl; /*//Here we can pass direct values a,b or refence of a,b or we can pass here anu type of data char or string it
    check which is greater by checking threir ascii values.*/

    m(*str(3));    // to get the value variable we should use derefencing operator here str(3) returns the ascii code of 3

    // It is recommeded to use str only as string parameter otherwise confusion.
}
