#include<iostream>
using namespace std;

int main()
{
  int num;
  int i = 1;
  cout << "Kun number ko table chaiyo? ";
  cin >> num;
  cout << num << " ko table:" << endl;
  do
  {
    cout << num << " * " << i << " = " << num * i << endl;
    i++;
  } while (i <= 10);
  
}