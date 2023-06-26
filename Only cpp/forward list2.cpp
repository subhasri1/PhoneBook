#include<iostream>
#include<forward_list>

using namespace std;

main()
{
    forward_list<int> a;
    int i=10;
    auto itr=a.begin();
    while(i)
    {
        a.push_front(i);
        i--;
    }
    for(int i:a)
    cout<<i;

   // a.emplace_after(itr,98,89);
}
///  Methods of forward list
/*
Iterators
before_begin	Return iterator to before beginning (public member function)
begin	Return iterator to beginning (public member type)
end	Return iterator to end (public member function)
cbefore_begin	Return const_iterator to before beginning (public member function)
cbegin	Return const_iterator to beginning (public member function)
cend	Return const_iterator to end (public member function)

Capacity
empty	Test whether array is empty (public member function)
max_size	Return maximum size (public member function)

Element access
front	Access first element (public member function)

Modifiers
assign	Assign content (public member function)
emplace_front	Construct and insert element at beginning (public member function)
push_front	Insert element at beginning (public member function)
pop_front	Delete first element (public member function)
emplace_after	Construct and insert element (public member function)
insert_after	Insert elements (public member function)
erase_after	Erase elements (public member function)
swap	Swap content (public member function)
resize	Change size (public member function)
clear	Clear content (public member function)

Operations
splice_after	Transfer elements from another forward_list (public member function)
remove	Remove elements with specific value (public member function)
remove_if	Remove elements fulfilling condition (public member function template)
unique	Remove duplicate values (public member function)
merge	Merge sorted lists (public member function)
sort	Sort elements in container (public member function)
reverse	Reverse the order of elements (public member function)

Observers
get_allocator	Get allocator (public member function)

*/
