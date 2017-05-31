#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main(){
  string s;
  getline(cin,s);
  string::size_type rev;
  int i=stoi(s,&rev);
  cout<<i;
  
    return 0;
}
