#include<iostream>
#include<cctype>

using namespace std;

int main()
{
  string word;
  int vowCount = 0;
  int consCount = 0;
  cout << "Kunai word lekhnuhosh: ";
  getline(cin, word);

  for (char ch : word)
  {
    if(isalpha(ch))
    {
      char lower = tolower(ch);
      if (lower == 'a' || lower =='e' || lower=='i' || lower =='o' || lower == 'u')
      {
        vowCount++;
      }
      else{
        consCount++;
      }
    }
  }
  cout << "Deko word ma vowel ko count: " << vowCount<< endl;
  cout << "Deko word ma consonant ko count: " << consCount <<endl;
}