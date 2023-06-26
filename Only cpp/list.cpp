#include<iostream>
#include<list>

using namespace std;


main()
     {  int i=0;
         list<int> a;
         cout<<a.max_size()<<endl;   // max size of list 768614336404564650
         while(1)
         {


         a.push_front(i);

         i++;
         if(i==20)
         //exit(0);
         break;

         }

         for(int j:a)
            cout<<j<<endl;
     }
