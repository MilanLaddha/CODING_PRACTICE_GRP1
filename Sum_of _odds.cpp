#include <iostream>
using namespace std;
int main(){
  //Finding Sum of odd terms upto n terms and display the odd no
  int i;
  int n;
  int sum = 0;
  cout << "enter the number till you want the sum of odd number : ";
  cin >> n;
  
  cout << " the odd no. are as follows:";
  for (i=1;i<=n;i++){
    if (i%2 != 0){
      sum+=i;
      cout << i << " ";
    }
  }
  cout <<"\n"<< "The Sum of Odd terms is: "<< sum;
  return 0;
}
