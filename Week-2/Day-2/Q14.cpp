#include<iostream>
#include<cctype>

using namespace std;

int main()
{
  string word;

  cout << "Kunai word lekhnuhosh: ";
  getline(cin, word);

  int count[26] = {0};

  for (char ch : word)
  {
    if (isalpha(ch))
    {
      char lower = tolower(ch);
      count[lower - 'a']++;
    }
  }
  for (int i = 0; i < 26; i++)
  {
    if (count[i] > 0)
    {
      cout << (char)(i + 'a') << " ko count: " << count[i] << endl;
    }
  }
}