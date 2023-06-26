#include<iostream>
#include<vector>
using namespace std;

template<class X> X big(X a,X b) //if only one class x is passed then we can pass argument of only one class type
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}


template<class X,class Y> X big2(X a,Y b) //if two class x and class y is passed then we can pass argument of two class type
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
class A
{

};

template<class X,class Y>class sector:public A  //Template class can only inherit from normal class Like A here. Not from template class like vector.
{
    public:
    //sector<class X,class Y> a,b;
    void m()
    {
       // c//out<<a<<b;
    }

};


template<class X>class lector:public A  //Template class can only inherit from normal class Like A here. Not from template class like vector.
{
    public:
         int i=0;
        int k;
        //lector<int> l;

       // lector<float> f[20];

    //sector<class X,class Y> a,b;
         void operator=(int b)
         {
             k=b;
         }
    void  insert1(lector<int> p[],int a)
    {

         p[i]=a;
        i++;
    }
//     lector insert1(lector<float> b)
//    {
//        int j=0;
//        f[i]=b;
//        i++;
//    }
//    void m()
//    {
////        cout<<a<<b;
//    }
//
//};
};
main()
{

    sector<char,int> s[20];   //templates cannot be passed as argument to template
   // s.size();

   lector <int> w[20],n;


   n.insert1(w,20);

   n.insert1(w,30);
   for(int i=0;i<20;i++)
   cout<<w[i].k<<endl;
  // s.m();




    big(2,3);
    big2(2.4,3);
}
