#include<iostream>
#include<string>

using namespace std;

int main()
{
  string word;

  cout << "Kunai word lekhnuhosh: ";
  getline(cin, word);

  string filteredWord = "";

  for (char ch : word)
  {
    if (isalpha(ch))
    {
      filteredWord = filteredWord + ch;
    }
  }
  cout << "Alphabet haru matra rakhepachi: " << filteredWord << endl;
}
