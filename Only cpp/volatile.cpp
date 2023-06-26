#include<iostream>
#include<thread>
#include<unistd.h>
using namespace std;

int  volatile k=0;

void m()
{
    while(k==0);
    {
        cout<<"Inside m:"<<endl;
    }
}

void m1()
{
     this_thread::sleep_for(chrono::seconds(5));
     cout<<"Inside m1"<<endl;
    k=1;

}
main()
{
  thread t1(m);





    thread t2(m1);
  t2.join();

  t1.join() ;


   cout<<"Main end"<<endl;
}
