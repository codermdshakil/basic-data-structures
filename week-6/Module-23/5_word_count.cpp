#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);

    // inisialaise a map
    map<string, int> mp;

    while (ss >> word)
    {
        mp[word]++;
    }

    // all word count
    //----------------
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // specific value
    cout << mp["loves"] << endl;
    

    return 0;
}