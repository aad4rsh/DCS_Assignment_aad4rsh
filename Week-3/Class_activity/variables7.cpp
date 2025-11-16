#include<iostream>
using namespace std;

int glovar = 5;

void test()
{
  int localvar = 10;

  static int statvar = 20;

  cout << "local variable: " << localvar<< endl;
  cout << "Static variable: " << statvar << endl;
  cout << "Global variable: " << glovar << endl;

  glovar++;
  localvar++;
  statvar++;

}

int main(){
  cout << "--------First----------" << endl;
  test();
  cout << "--------Second----------" << endl;
  test();
  cout << glovar;
}