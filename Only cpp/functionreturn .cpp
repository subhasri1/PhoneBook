#include<iostream>

using namespace std;



int m()
{
    return 'a';     //ASCII value of character is returnd
}

char m1()
{
    return (char)9000;   //Char which has ascci code equal to retuning integer digit is returned
}
main()
{
    cout<<m()<<'\n';
    cout<<m1();
}
