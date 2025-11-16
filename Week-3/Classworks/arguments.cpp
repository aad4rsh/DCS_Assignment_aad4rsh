#include<iostream>
using namespace std;

void increment(int &num)
{
  num++;
  cout << "Inside increment function: " << num << endl;
}
int main()
{
  int number = 5;
  increment(number);
  cout << "After increment function: " << number << endl;
  return 0;
}