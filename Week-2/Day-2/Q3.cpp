#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double num1, num2;

  cout << "Pahilo number lekhnuhosh: ";
  cin >> num1;

  cout << "Dosro number lekhnuhosh: ";
  cin >> num2;

  double max = fmax(num1,num2);
  double min = fmin(num1,num2);

  cout << "Tapaile deko number ma Max value " << max << " cha" << endl;
  cout << "Tapaile deko number ma Min value " << min << " cha" <<endl;

}