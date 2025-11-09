#include<iostream>
#include<string>

using namespace std;

int main()
{
  string sentence;
  cout << "Kunai sentence lekhnuhosh: ";
  getline(cin, sentence);

  string Word = "";
  string longWord = "";

  for(char ch : sentence)
  {
    if (isspace(ch))
    {
      if (Word.length() > longWord.length())
      {
        longWord = Word;
      }
      Word = "";

    }

    else
    {
      Word = Word + ch;
    }
    
  }
  cout << "Deko sentence ma sabai bhanda lamo word: " << longWord << endl;
}