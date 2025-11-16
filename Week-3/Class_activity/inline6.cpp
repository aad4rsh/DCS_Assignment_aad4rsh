#include<iostream>
using namespace std;

inline double cube(double num)
{
  return num*num*num;
}

int main()
{
  int num;

  cout << "Kun number ko cube chaiyo? ";
  cin >> num;

  cout << cube(num);
}