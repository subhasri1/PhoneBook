#include <iostream>
#include<exception>
using namespace std;

class A:public exception
{

};
int main () {
    A a;
  try
  {
    throw 10;
  }
  catch (exception & e) //by this we donot able to catch exception only badcast,badtypeid,compiler based exception are caught like this
  {
    cout << "An exception occurred. Exception Nr. " ;
  }
//  catch(int i)
//  {
//
//  }
  return 0;
}
