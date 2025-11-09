#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main()
{
  string word;
  cout << "Kunai word lekhnuhosh: ";
  getline(cin, word);

  for(int i = 1; i <word.length(); i++)
  {
    if (isalpha(word[i]))
    {
      if (i % 2 == 0)
      {
        word[i] = toupper(word[i]);
      }
      else
      {
        word[i] = tolower(word[i]);
      }
      
    }
    
  }
  cout << "Alternate garepachi: " << word << endl;
}