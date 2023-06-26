#include<iostream>
#include<future>
#include<thread>
typedef long int ull;
using namespace std;

void findodd(std::promise<ull>&&oddpromise,ull start,ull end1)
{
    ull oddsum;
    cout<<"provide end value"<<endl;
    cin>>oddsum;

    for(int i=0;i<=end1;i++)
    {
        oddsum+=i;
    }
    oddpromise.set_value(oddsum);
}
main()
{ ull start=0,end1=1000000;
std::promise<ull>sum;
std::future<ull>oddfuture=sum.get_future();
std::thread t1(findodd,std::move(sum),start,end1);


t1.join();

cout<<"Sum="<<oddfuture.get()<<endl;

}
