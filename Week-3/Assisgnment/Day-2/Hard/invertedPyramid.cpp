#include<iostream>
using namespace std;

int main()
{
  int rows;
  cout << "Kati ota rows bhako pyramid chaiyo? ";
  cin >> rows;

  for (int i = rows; i >= 1; i--)
  {
    for (int k = rows-i; k >= 1; k--)
    {
      cout << " ";
    }
    for (int j = (2*i -1); j >= 1; j--)
    {
      
      cout << "*";
    }
    cout << endl;
  }
  
}