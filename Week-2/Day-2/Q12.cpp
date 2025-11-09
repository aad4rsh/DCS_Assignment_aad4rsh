#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double a, b, c;

  cout << "a ko value halnuhosh: ";
  cin >> a;
  cout << "b ko value halnuhosh: ";
  cin >> b;
  cout << "c ko value halnuhosh: ";
  cin >> c;

  double D = sqrt(pow(b,2)- 4 * a *c);
  double x1 = (-b + D) / 2*a;
  double x2 = (-b - D) / 2*a;

  cout << "Quadratic equation ko roots haru: " << endl;
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;

  if( D == 0)
  {
    cout << "Roots haru real ra equal chan!" << endl;
  }
  else if( D > 0)
  {
    cout << "Roots haru real ra distinct chan!" << endl;
  }
  else
  {
    cout << "Roots haru imaginary chan!" << endl;
  }


}