#include<iostream>
#include<mutex>
#include<condition_variable>
#include<thread>
using namespace std;
std::mutex m;
long balance =0;
condition_variable cv;
void addmoney()
{
    long a;

    cout<<"Enter amount :"<<endl;
    cin>>a;

    balance=a;
     cv.notify_one();
}
bool m1()
{
    if(balance>0)
          return true;
          else
          return false;

}
void withdrawmoney()
{
    std::unique_lock<mutex>lock (m);
   cv.wait(lock,[]{ return balance>0?true:false;});
   cout<<"Total balance="<<balance<<endl;
}
main()
{
    thread t1(withdrawmoney);
    thread t2(addmoney);
t1.join();
t2.join();
}

