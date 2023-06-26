#include<iostream>
using namespace std;

class A
{
public:
    virtual void dummy()           //for downcasting it is necessary to hav one virtual methoad in base class
    {

    }

};
 class B:public A
 {

 };

  main()
  {
      A *a=new B();
      A *c=new A;
      void *p=nullptr;

        B &d=*(dynamic_cast<B*>(a));  //ok


        B *f=(dynamic_cast<B*>(a));

        B &e=(dynamic_cast<B&>(*a));          //for downcasting parenttype pointer to child type reference


        // B &e=(dynamic_cast<B&>(c));       //here bad cast exception is thrown
      cout<<typeid(a).name()<<endl;

      cout<<typeid(p).name()<<endl;




      cout<<typeid(p).name();


        A *x=NULL;
        cout<<typeid(*x).name()<<endl;   //bad type id when pointer contain NULL and we try to get null object by derefencing *ptr
        //                                and ptr contains NULL



      B *b =static_cast<B*>(c);     //for static_cast dynamic instantiation is required
  }
