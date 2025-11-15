#include<iostream>
using namespace std;

int main()
{
  int numbers[] = {1,3,5};

  for(int n : numbers)
  {
    cout << n << " "<< endl;
  }

  for (int i = 1; i <= 5; i+=2)
  {
    cout << i << " ";
  }
  
}