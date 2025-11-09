#include<iostream>
#include<cctype>

using namespace std;

int main()
{
  char letter;

  cout << "Yeuta letter lekhnuhosh: ";
  cin >> letter;

  if (isupper(letter) != 0)
  {
    cout << "Deko letter uppercase ma cha!!" << endl;
    cout << "Lowercase ma: " << (char) tolower(letter);
  }
  
  else if (islower(letter) != 0)
  {
    cout << "Deko letter lowercase ma cha!!" << endl;
    cout << "Uppercase ma: " << (char) toupper(letter);
  }

  else{
    cout << "Deko input letter haina!!" << endl;
  }
}