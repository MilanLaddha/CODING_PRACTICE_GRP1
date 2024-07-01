#include <iostream>
using namespace std;
int main(){
  int i;
  int n;
  cout<<"enter the number required to remove the cube to:";
  cin>>n;
  for (i=1;i<=n;i++){
    cout<<i<<"-"<<i*i*i<<endl;
  }
  return 0;
}
