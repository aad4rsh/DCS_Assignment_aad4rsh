#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
  int a , b;
  cout << "a ko value halnuhosh: ";
  cin >> a;
  cout << "b ko value halnuhosh: ";
  cin >> b;
  int sum = add(a, b);
  cout << "Deko number ko sum: " << sum << endl;
}