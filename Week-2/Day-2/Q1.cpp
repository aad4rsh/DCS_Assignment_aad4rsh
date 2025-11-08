#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int number;

  cout << "Yeuta number lekhnushos: ";
  cin >> number;

  int filt_num = abs(number);

  float sqrt_num = sqrt(filt_num);

  cout << "Tapaile deko number ko absolute value: " << filt_num << endl;
  cout << "Tapaile deko number ko square root: " << sqrt_num;
}