#include<iostream>
using namespace std;


int sqaure(int a)
{
  
  return a * a;
}
int main(){
  int num;
  cout << "Kun number ko square chaiyo? ";
  cin >> num;
  
  cout << "Tapaile deko: " << num << endl;
  cout << "Tapaile deko number ko square: " << sqaure(num);
  
}