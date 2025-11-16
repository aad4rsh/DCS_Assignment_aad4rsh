#include<iostream>
using namespace std;

int main()
{
  int rows;

  cout << "Kati ota rows bhako pattern chaiyo? ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    char count = 'A';
    for (int j = 1; j <= i; j++)
    {
      cout << char(count) << " ";
      count++;
    }
    cout<< endl;
  }
  
}