#include<iostream>
using namespace std;

int main()
{
  int num;
  int count =0;

  cout << "Kun number ko digit count garnu cha? ";
  cin >> num;

  do
  {
   
    num = num/10;
    count++;

  } while (num!=0);
  cout << "Tapaile deko number ko digit count: " << count;
}