#include<iostream>
#include<string>

using namespace std;

int main()
{
  string word;

  cout << "Kunai word lekhnuhosh: ";
  getline(cin, word);

  int length = word.length();

  cout << "Deko word ko length: " <<length << endl;
}