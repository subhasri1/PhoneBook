//#include<iostream>
//using namespace std;
//
//char a[]={'a','b','c'};
//
//const char * fin()
//{
//    return a;
//}
//
//int main()
//{
//     string s=fin();
//     cout<<s;
//
//}
// int n1 = 0, n2 = 0;
//
//    int *const ptr = &n1;
//
//    *ptr = 100;//valid
//
//    ptr = &n2;//Invalid
//
//    printf(“%d\n”, *ptr);

#include<iostream>
using namespace std;

const char *a[]={"vhvh","gbhbh"} ;             //{'a','b','c'};

char const **fin()
{
    return a;
}

int main()
{
     string s[2];
     s[0]=(string)**fin();
     cout<<s;

}
