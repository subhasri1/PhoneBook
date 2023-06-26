#include<iostream>
using namespace std;

template<class T> class vect
{
public :
    int s=0,x=0;
    T *a;
    vect()
    {
      a=new T[25];
    }
    vect(int x)
    {
        a=new T[x];
    }

    vect(int x,T c)
    {
        a=new T[x];
        this->x=x;
        while(x>0)
        {
            a[x-1]=c;
            x--;
        }
    }

    vect(vect &s)
    {
       a=new T[s.x];
      for(int i=0;i<s.x;i++)
        a[i]=s.a[i];
    }

    void add_back(T x)
    {
            s=this->x;
            a[s]=x;
           this->x++;


    }
    void add_front(T x)
    {


            a[s]=x;
        s++;

    }
    void display()
    {
       for(int i=0;i<x;i++)
        cout<<a[i]<<endl;
    }
};

main()
{
   vect<int> q(10,20);
   vect<int>s(q);
  // for(int i=0;i<10;i++)
   //q.add_back(i);

   s.display();


}
