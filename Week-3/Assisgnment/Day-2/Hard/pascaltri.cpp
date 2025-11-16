#include<iostream>
using namespace std;

double fact(double num)
{
  if (num == 1 || num == 0)
  {
    return 1;
  }
  return num * fact(num-1);
}

int main()
{
  int rows;
  cout << "Kati ota rows chaiyo? ";
  cin >> rows;

  for (int i = 0; i <= rows; i++)
  {
    for (int k = 0; k <= rows - i; k++)
    {
      cout << " ";
    }
    
    for (int j = 0; j <= i; j++)
    {
      cout << fact(i) / (fact(j) * fact(i-j)) << " ";
    }
    cout << endl;
  }
  

}