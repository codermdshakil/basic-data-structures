#include <bits/stdc++.h>
using namespace std;

bool is_valid(string &str)
{
    // declare stack to store character from string
    stack<char> s;
    for (char c : str)
    {
        // logic
        if (!s.empty() && (c == '1' && s.top() == '0'))
        {
            s.pop();
        }
        else if (!s.empty() && (c == '0' && s.top() == '1'))
        {
            s.pop();
        }
        else
        {
            s.push(c);
        }
    }
    return s.empty();
}

int main()
{
    int t;
    // testcase input
    cin >> t;
    while (t--)
    {
        string str;
        // string input
        cin >> str;
        // called is_valid function and print result
        if (is_valid(str))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}