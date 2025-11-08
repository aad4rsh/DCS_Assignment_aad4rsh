#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double angle;

  cout << "Angle ko value halnush (degree ma): ";
  cin >> angle;

  double angle_rad = angle* M_PI / 180.0;

  cout <<  "sin(" << angle << ") = " << sin(angle_rad) << endl; 
  cout <<  "cos(" << angle << ") = " << cos(angle_rad) << endl; 
  cout <<  "tan(" << angle << ") = " << tan(angle_rad) << endl; 
}