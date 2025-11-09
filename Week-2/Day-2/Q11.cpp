#include<iostream>
#include<string>

using namespace std;

int main()
{
  string word1, word2;

  cout << "Pahilo word halnuhosh: ";
  cin >> word1;
  cout << "Dosro word halnuhosh: ";
  cin >> word2;

  string finalWord = word1 +" "+ word2;

  cout << "Deko dubai word jodepachi: " << finalWord;

}