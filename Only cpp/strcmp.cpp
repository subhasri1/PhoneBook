#include <cstring>
#include <iostream>
#include<memory>
using namespace std;

int main() {
    int *p,*p1;
    int a=0;

//   s=&a;
    p=&a;
     unique_ptr<int> s(int a=10);
     cout<<;
    p1=p;
  // / p1=&a;                     ///Two pointers can point to same object.

  char str1[] = "Megadeth";
  char str2[] = "Megadetl";

  // compare str1 and str2 lexicographically
  int result = strcmp(str1, str2);

  cout << result;

  return 0;
}
