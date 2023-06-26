#include<iostream>
#include<regex>
using namespace std;

main()
{
   string s;
   regex e("abc.");  ///only abc+anyone character
   regex e1("abc",regex_constants::icase);   ///only abc
   regex e2("abc?");                      ///Zero or 1 preceding charater i.e here it is c just before a so either have zero c or max one c
   regex e3("abc*");                   ///Zero or more than 1 preceding charater i.e c come zero time or multiple times
   regex e4("abc+");             ///one or more preceding character
   regex e5("ab[cd]*");       //Any character inside the square bracket  along character outside square bracket(must)
   regex e6("ab[^cd]*");    //Any chaRacter  not inside square bracket along with outside bracket
   regex e7("ab[^cd]{3}");   ///Exact three appearances of of any character inside bracket or cdc or ddc or ccd or dcd
   regex e8("(abc)de+\\1");   ///here () represents group and \\1 means group repeated one time after de note here e+ so e can be multiple times
regex e9("[[:w:]]+@[[:w:]]+\.com"); ///[[:w:]] represents word character:digit,number or underscore or any word  Note: digit character combo possi
   while(true)
   {


        cin>>s;
        bool match=regex_match(s,e9);

        cout<<(match?"Matched:":"Not Matched:")<<endl;

   }
   cout<<"bd"<<endl;

}
