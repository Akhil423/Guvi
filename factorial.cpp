// factorial of a number 

#include<iostream>

using namespace std;

int fact=1;
int facto(int fac){
  
  if(fac<=1){
  return fact;
  }
  fact=fact*facto(fac-1);
  return 0;
}

int main(){
    int num;
    cout<<"enter no for factorial"<<endl;
    cin>>num;
    int res=facto(num);
    cout<<res;
    
    return 0;
}
