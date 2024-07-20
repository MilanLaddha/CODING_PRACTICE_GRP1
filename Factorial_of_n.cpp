#include <iostream>
using namespace std;
int main(){
  int n;
  int i;
  int g;
  int f=1;
  cout<<"enter the number to fint factorial";
  cin>>n;
  for(i=1;i<n;i++){
    f=f*i;
  }
  printf("factorial of %d is %d ",n,f);
  return 0;
}
