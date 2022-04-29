#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
void Merge(string s){
    ifstream fin;
        ofstream fout;
            fin.open("list1.txt");
                //string line;
                    string key;
                        long long value;

                        map <string, long long> params; // errors
                        while ( fin >> key >> value ) {
                            params[key] = value; // input them into the map
                            }
                                map<string,long long>::iterator itr;
                                     fout.open("list1.txt",ios::app);
                                         for(itr=params.begin();itr!=params.end();itr++)
                                             fout<<itr->first<<" " <<itr->second<<endl;

                                             fin.close();
                                             fout.close();
                                             }

                                            /* int main(){
                                                string s=filename;
                                               Merge(s);
                                               return 0;
                                               }*/
