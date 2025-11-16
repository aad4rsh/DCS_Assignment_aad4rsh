#include<iostream>
using namespace std;
int main()
{
  int rows;
  cout << "Kati ota rows bhako Number Triangel Pyramid Chaiyo? ";
  cin >> rows;

  for (int i = 1; i <= rows; i++)
  {
    int count =1;
    for (int j = 1; j <= i; j++)
    {
      cout << count <<" ";
      count++;
    }
    cout << endl;
  }
  
}