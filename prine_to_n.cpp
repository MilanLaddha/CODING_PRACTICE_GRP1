#include<iostream>
using namespace std;
bool prime(int n){
  if(n<=1){
    return false;
  }
  if(n==2){
    return true;
  }
  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  
  }
  return true;
};

int main(){
  int n;
  int i;
  cout<< "enter the number you want to check if prime of not :";
  cin>>n;
  for(i=2;i<=n;i++){
    if(prime(i)){
        out << i << " ";
    }
        }
    return 0;
  }

