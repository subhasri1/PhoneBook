#include<iostream>
#include<exception>

using namespace std;
void myunexpected()
{
    cout<<"Exception caught"<<endl;
    try
    {

    }
    catch(...)
    {

        cout<<"efb";
    }
}
void exp()
{
    throw "abc";
}
main()throw()
{
    std::set_unexpected(myunexpected);
try
{


    exp();
}
catch(int)
{
    cout<<"Integer Exception:"<<endl;
}
//catch(...)
//{
//    cout<<"Integer Exception:"<<endl;
//}

}
