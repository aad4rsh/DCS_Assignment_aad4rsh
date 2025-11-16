#include<iostream>
using namespace std;

int main()
{
  int num;
  int var = 1;

  cout << "Kati row ko Floyd Triangle chaiyo? ";
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << var << " ";
      var++;
    }
    cout <<endl;
  }
  
}