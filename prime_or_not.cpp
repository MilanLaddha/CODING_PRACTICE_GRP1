#include<iostream>
using namespace std;
bool prime(int n){
  if(n<=1){
    return false;
  }
  if(n==2){
    return true;
  }
  for(i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  
  }
};

int main(){
  int n;
  cout<< "enter the number you want to check if prime of not"
  cin>>n
  if (prime(n)){
    cout<<"the number"<<n<<"is prime"
  }
  else{
    cout<<"the number"<<n<<"is not prime"
  }
}
