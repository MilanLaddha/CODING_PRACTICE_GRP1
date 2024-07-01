include <iostream>
using namespace std;
int main(){
  int n;
  int i;
  float sum=0;
  float avg;
  cout<<"Enter 10 numbers";
  

  for(i==0;i<10;i++){
      cin>>n;
      sum+=n;
  }
  avg=sum/10;
  cout<<"sum is"<<sum<<endl;
  cout<<"avg is"<<avg<<endl;
  return 0;
  
}
