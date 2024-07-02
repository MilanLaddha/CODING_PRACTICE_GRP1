#include <iostream>
using namespace std;
int main(){
  //Finding Sum of odd terms upto n terms and display the odd no
  int i;
  int n;
  int a;
  int sum = 0;
  cout << "enter the  starting number : ";
  cin >> a;
  cout << "enter the  starting number : ";
  cin >> n;         
  cout << " the odd no. are as follows:";
  for (i=a;i<=n;i++){
    if (i%2 == 0){
      cout << i << " ";
    }
  }
  
  return 0;
}
