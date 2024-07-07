#include <iostream>
using namespace std;
int main(){
  int n,i,j;
  cout<<"enter the numer for revere pyramid";
  cin>>n;
  for(i=n;i=1;i--){
    for(j=i;j=1;j--){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}

