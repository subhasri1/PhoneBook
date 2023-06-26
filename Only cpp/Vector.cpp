#include<iostream>
#include<vector>
using namespace std;

main()
{
    vector<int> a; //Constructs an empty container, with no elements.

    vector<int> b(4,90);   //Constructs a container with n elements. Each element is a copy of val

    vector<int> c(b);    //Constructs a container with a copy of each of the elements in x, in the same order

 vector<int> d(b.begin(),b.end());   //Constructs a container with as many elements as the range [first,last), with each element constructed from its
 //                                         corresponding element in that range, in the same order.
    cout<<d.capacity();   //

    cout<<d.max_size();    //For vwctor max size is 4620000000 and for array
}
