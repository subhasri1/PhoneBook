#include<iostream>
#include <unistd.h>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

class Base
{ public:
   virtual ~Base()=0;
};
 std::mutex m;
 std:: condition_variable cv;
Base::~Base()    ///We can create pure virtual destructor  in c++ but we should compulsory provide its implementation outside class like static variable
{
   cout<<"Base pure virtual destructor"<<endl;
}
int a;
void m1()
{
    while(1)
    {     // m.lock();
        cout<<"Inside m1:"<<endl;
        sleep(1);
        a=10;
        //m.unlock();
        cv.notify_all();
        break;

    }
}
 class Derived:public Base
 {
     public:
     ~Derived()
     {
         cout<<"derived destructor"<<endl;
         std::this_thread::sleep_for(chrono::seconds(3));
        std::unique_lock<mutex> lck(m);
  cv.wait(lck,[]{
          if(a==10)
            return true;
            else
                return false;
          });
     }

 } ;
main()
{
  Derived d;

}
