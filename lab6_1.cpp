#include <iostream>
using namespace std;

int main() {
  int n,e=0,o=0;
  while(n!=0){
  cout << "Enter an integer: ";
  cin >> n;
  if(n%2==0 && n!=0){
      e++;
  }
  if(n%2!=0){
      o++;
  }
  }
    cout << "#Even numbers = "<<e<<"\n";
    cout << "#Odd numbers = "<<o;
  return 0;
}
