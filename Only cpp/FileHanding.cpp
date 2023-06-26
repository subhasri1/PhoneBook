#include<iostream>
#include<fstream>
using namespace std;
main()
{
  ofstream fout;
  fout.open("abc.txt") ;

  fout<<"First cpp File handling"<<endl;
  fout.close()  ;
  fout.open("abc.txt",ios::app);
  fout<<"Anhishek ";
}
