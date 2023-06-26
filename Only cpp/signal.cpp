#include<iostream>
#include<signal.h>
using namespace std;
void m(int Signum)
{

    cout<<"Signal handled carefully"<<endl;
}

main()
{
      signal(SIGABRT,m);
    raise(SIGABRT);


}
