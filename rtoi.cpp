#include<iostream>
#include<string>
#include<stdlib>
using namespace std;

int fetch(char a){

      if(a=='I')
      return 1;
      if(a=='V')
      return 5;
      if(a=='X')
      return 10;
      if(a=='L')
      return 50;
      if(a=='C')
      return 100;
      if(a=='D')
      return 500;
      if(a=='M')
      return 1000;

  return -1;
}
int rmnum(string &st){
  
      int integ=0,c1,c2;
      for(int i=0;i<st.length();i++){
        c1=fetch(st[i]);
        if(i+1<st.length()){
          c2=fetch(st[i+1]);
          if(c1>=c2)
            integ+=c1;
          else{
            integ+=(c2-c1);
            i++; 
           }
        }
        else
            integ+=c1;
      }

  return integ;
}


int main(void){
  
    string s;
    geline(cin,s);
    int out=rmnum(s);
    cout<<"the value of roman"<<s<<"is:"<<out;
      
      return 0;
}
