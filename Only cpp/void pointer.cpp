#include<iostream>
using namespace std;
typedef long int ull;
main()
{ void *ptr;
int a=65;
int *p=&a;

ptr=p;    ///void ptr can store null pointer also but cannot be dereffrenced

cout<<typeid(ptr).name()<<endl;;

cout<<*((char *)ptr)<<endl; ///void ptr can only be derreferenced when we typecast it into some datatype pointer and we can typecast in any type.
cout<<sizeof(ull);

ptr=NULL;

cout<<ptr<<endl;

ptr=nullptr;

cout<<ptr;

}
