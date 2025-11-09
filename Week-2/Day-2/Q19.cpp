//Anagram checker program
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string word1, word2;
  int count[26] = {0};
  cout << "Pahilo word halnuhosh: ";
  cin >> word1;
  cout << "Dosro word halnuhosh: ";
  cin >> word2;
  if (word1.length() != word2.length())
  {
    cout << "Deko dui word anagram haina!" << endl;
    return 0;
  }
  for (char ch : word1)
  {
    count[tolower(ch) - 'a']++;
  }
  for (char ch : word2)
  {
    count[tolower(ch) - 'a']--;
  }
  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
    {
      cout << "Deko dui word anagram haina!" << endl;
      return 0;
    }
  }
  cout << "Deko dui word anagram ho!" << endl;
}
