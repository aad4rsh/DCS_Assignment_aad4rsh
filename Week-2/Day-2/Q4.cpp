#include<iostream>
#include<cctype>

using namespace std;

int main()
{
  char letter;

  cout << "Yeuta character halnuhosh: ";
  cin >> letter;

  if (isalpha(letter) != 0)
  {
    cout << letter << " yeuta alphabet ho";
  }

  else if (ispunct(letter) != 0)
  {
    cout << letter << " yeuta special character ho";
  }

  else if (isdigit(letter) != 0)
  {
    cout << letter << " yeuta digit ho";
  }
  
}