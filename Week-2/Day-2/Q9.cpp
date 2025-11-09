#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
  string word;

  cout << "kunai word lekhnuhosh: ";
  getline(cin, word);

  reverse(word.begin(), word.end());

  cout << "Tapile deko word ko reverse: " << word;
  
}