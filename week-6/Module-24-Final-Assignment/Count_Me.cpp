#include <bits/stdc++.h>
using namespace std;

void findMostCountWord(string sentence)
{
    map<string, int> countWord;
    stringstream ss(sentence);
    string word;

    while (ss >> word)
    {
        countWord[word]++;
    }

    int mx = 0;
    string mostCountedWord;

    for (auto it = countWord.begin(); it != countWord.end(); it++)
    {
        if (it->second > mx)
        {
            mx = it->second;
            mostCountedWord = it->first;
        }
    }
    
    cout << mostCountedWord << " " << mx << endl;
}

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence); 
        findMostCountWord(sentence);
    }

    return 0;
}
