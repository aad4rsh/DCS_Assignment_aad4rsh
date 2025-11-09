#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
  string word;
  string result ="";
  cout << "Kunai word lekhnuhosh: ";
  getline(cin, word);

  for (char ch : word)
  {
    char lower = tolower(ch);
    if (lower != 'a' && lower !='e' && lower!='i' && lower !='o' && lower != 'u')
    {
      result = result + ch;
    }

  }
  cout << "Vowel haru hataepachi: " << result << endl;  
}