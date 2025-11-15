#include<iostream>
using namespace std;

int main(){
  int value;
  int sum = 0;

  // do
  // {
  //   cout << "yeuta value halnu: ";
  //   cin >> value;
  // } while (value!=7);

  while (value!=7)
  {
    sum = sum + value; 
    cout << "yeuta value halne: ";
    cin >> value;
  }
  cout << sum;
}