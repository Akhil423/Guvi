//code for reversing number 
#include<iostream>
using namesapce std;

void reverse_num(int num){
  int rem;
      if(!num){

          cout<<0;
          return 0;
      }
      while(num!=0){

          rem=num%10;
          cout<<rem;
          num/=10;

      }
}

int main(void){
    
      int num;
      cout<<"enter the positive integer to reverse the number"<<endl;
      cin>>num;
      reverse_num(num);

      return 0;
}
