#include <iostream>
#include <exception>
using namespace std;

class Base { virtual void dummy() {} };
class Derived: public Base { int a; };

int main () {
  try {
    Base * pba = new Derived;
    Base * pbb = new Base;
    Base &b=*new Base;
    Derived * pd;

    pd = dynamic_cast<Derived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast.\n";

    pd = dynamic_cast<Derived*>(pbb); ///     downcasting not done so null is passed to pointer
    if (pd==0) cout << "Null pointer on second type-cast.\n";

    Derived &d=dynamic_cast<Derived &>(b);   //when we try to downcast rehrence of parent to child without having child instance badcast exception is thrown

  } catch (exception& e) {cout << "Exception: catched:" << e.what();}
  return 0;
}

//class Base {};
//class Derived: public Base {};
//main()
//{
//
//
//Base * a = new Base;
//Derived * b = static_cast<Derived*>(a);
//}
