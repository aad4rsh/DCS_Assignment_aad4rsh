#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double x1,x2,y1,y2;

  cout << "x1 ko value halnuhosh: ";
  cin >> x1;
  cout << "y1 ko value halnuhosh: ";
  cin >> y1;  
  cout << "x2 ko value halnuhosh: ";
  cin >> x2;
  cout << "y2 ko value halnuhosh: ";
  cin >> y2;
  double distance = sqrt( pow((x2 - x1),2) + pow((y2 - y1),2) );

  cout << "Dui point bich ko distance: " << distance;
}