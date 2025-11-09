#include<iostream>
#include<string>

using namespace std;

int main()
{
  string sentence;

  cout << "Kunai sentence lekhnuhosh: ";
  getline(cin, sentence);

  int wordCount = 0;
  bool inWord = false;

  for (char ch : sentence)
  {
    if (isspace(ch))
    {
      if (inWord)
      {
        wordCount++;
        inWord = false;
      }
    }
    else
    {
      inWord = true;
    }
  }

  if (inWord)
  {
    wordCount++;
  }

  cout << "Deko sentence ma total words ko count: " << wordCount << endl;
}