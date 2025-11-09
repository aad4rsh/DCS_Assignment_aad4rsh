#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
  string word;

  cout << "kunai word lekhnuhosh: ";
  getline(cin, word);

  string revWord = word;
  reverse(revWord.begin(), revWord.end());

  if (word == revWord)
  {
    cout << "Tapaile deko word Palindrome ho!" << endl;
  }

  else{
    cout << "Tapaile deko word palindrome haina!" <<endl;
  }
  
}