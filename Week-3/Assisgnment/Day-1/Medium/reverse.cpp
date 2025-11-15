#include<iostream>

using namespace std;

int main()
{
  int num, remain;
  int rev_num = 0;

  cout << "Kun number ko reverse chaiyo? ";
  cin >> num;

  cout << "Original Number: "<< num <<endl;
  while (num != 0)
  {
    remain = num % 10;
    rev_num = rev_num*10 + remain;
    num = num/10;
  }

  cout << "Reverse garepachi: "<< rev_num << endl;

  
}