#include<iostream>
using namespace std;

int main()
{
  int num;
  int sum = 0;
  cout << "Kati number samma ko sum chaiyo? ";
  cin >> num;

  for(int i = 1; i <= num ; i++)
  {
    sum = sum + i;
  }

  cout << "Tapaile deko number samma ko sum: " << sum;

}