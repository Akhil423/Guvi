#include<iostream>
#include<string>
using namespace std;
int main(){

string s,s1;
cin>>s;
int c=s.length();
  if(c>=1){
while(c--){
  if(s.at(1)=='-'){
  break;
  }
    
s1+=s.at(c);
}
  }
  else
    cout<<"give input";
  cout<<s1;
return 0;
}
