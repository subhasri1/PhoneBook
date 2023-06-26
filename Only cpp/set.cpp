#include<iostream>
#include<set>

using namespace std;
main()
{
  set<int>a;
int i=0;
  while(1)
  {    int b;
      cout<<"Insert value in set"<<endl;
cin>>b;
if(b=='\0')
        break;
 auto j=a.begin();
       a.insert(b);


  }


  pair<set<int>::iterator,bool> e;
  e=a.insert(20);
  auto itr=a.end();  ///insert returns a pair of set iterator and boolean which tells that value is inserted or not



  for(int l=a.size();l>0;l--)
  a.insert(++itr,l+100);



  for(int k:a)
   cout<<k<<endl;                   ///In set if we try to insert duplicate value then it will not give error but cannot except duplicate value
                    /// rest all methods of set is same as that of map

}

