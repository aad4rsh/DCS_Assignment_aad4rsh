#include<iostream>
#include<cmath>

using namespace std;

double power(double base, double exponent = 2 )
{
  return pow(base,exponent);
}

int main()
{
  double b,e;
  cout << power(4,2) << endl;
  cout << power(3) << endl;
}