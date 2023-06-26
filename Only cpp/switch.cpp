#include <iostream>
using namespace std;


int m()
{
    return 'z';
}
main()
{
    switch(m())
    {
    case 90:
        cout<<"first case"<<endl;

        break;


    case 'z':
        cout<<" Z case";      //In switch we can pass int and char value but they should not be duplicate
    }
}
