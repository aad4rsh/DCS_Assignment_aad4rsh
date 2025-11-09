//String compressor

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Kunai word lekhnuhosh: ";
    getline(cin, word);

    string compressed = "";
    int count = 1;
    for (int i = 1; i <= word.length(); i++)
    {
        if (i < word.length() && word[i] == word[i - 1])
        {
            count++;
        }
        else
        {
            compressed += word[i - 1];
            if (count > 1)
            {
                compressed += to_string(count);
            }
            count = 1;
        }
    }
    cout << "Compressed word: " << compressed << endl;
}