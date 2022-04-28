#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
void Display()
{
    ifstream fin;
        ofstream fout;
            fin.open("list1.txt");
                //string line;
                    string key;
                        long long value;

                        map <string, long long> params; // errors
                        while ( fin >> key >> value ) 
			{
                            params[key] = value; // input them into the map
                         }
                                map<string,long long>::iterator itr;
                                    for(itr=params.begin();itr!=params.end();itr++)
                                        cout<<itr->first<<" " <<itr->second<<endl;

                                        fin.close();

                                        }

                             //           int main()
                                      // {

                                    //      Display();
                                  //        return 0;
                                //        }
