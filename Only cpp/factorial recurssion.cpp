//#include<iostream>
//using namespace std;
int f=1;
 int fact(int x)
 {
     if(x==0)
     {
        return 1;
     }

   else{
       f= x*fact(x-1);

       return f;
   }


 }
//main()
//{
//   int c=fact(5);
//   cout<<c;
//}
#include<iostream>
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));

    std::cout<<fact(5);
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
