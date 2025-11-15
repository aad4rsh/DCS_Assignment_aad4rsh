#include<iostream>
using namespace std;

int main()
{
  int num;
  int fact = 1;

  cout << "Kun number ko factorial chaiyo? ";
  cin >> num;

  for (int i = num; i >= 1; i--)
  {
    fact = fact *i;
  }
  cout<< "Tapaile deko number ko factorial: "<< fact;
}