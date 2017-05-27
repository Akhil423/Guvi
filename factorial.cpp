// factorial of a number akki

#include<iostream>

using namespace std;

int facto(int fac){
  
  if(fac==1 || fac==0)
  return 1;
  
  return fac*facto(fac-1);
 
}

int main( void ){
  
    int num;
    cout<<"enter no in between 0 t0 12 for factorial"<<endl;
    cin>>num;
  
      if(num<0 || num>12)
        cout<<"please satisfy the above condition mentioned!";
      else
    int res=facto(num);
    cout<<res;
    
    return 0;
}
