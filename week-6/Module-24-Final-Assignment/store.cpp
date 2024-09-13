#include <bits/stdc++.h>
using namespace std;

void findMostCountWord(string sentence)
{
    map<string, int> countWord;
    vector<string> words;
    stringstream ss(sentence);
    string word;

    // get words from sentence
    while (ss >> word)
    {
        if (countWord[word] == 0)
        {
            words.push_back(word);
        }
        countWord[word]++;
    }

    int mx = 0;
    string mostCountedWord;

    for (const string &w : words)
    {
        if (countWord[w] > mx)
        {
            mx = countWord[w];
            mostCountedWord = w;
        }
    }

    cout << mostCountedWord << " " << mx << endl;
}

int main()
{
    // take testcase
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        // take sentence input
        string sentence;
        getline(cin, sentence);

        // callled most count word function
        findMostCountWord(sentence);
    }

    return 0;
}
