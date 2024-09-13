#include <bits/stdc++.h>
using namespace std;

int main()
{

    // take testcase num inpur
    int n;
    cin >> n;
    
    // inisialise map to store frq value
    map<int, int> myMap;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myMap[x]++;
    }

    int m;
    cin >> m;
    while (m--)
    {
        int command;
        cin >> command;
        if (command == 1)
        {
            if (!myMap.empty())
            {
                cout << myMap.begin()->first << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!myMap.empty())
            {
                auto it = myMap.begin();
                it->second--;
                if (it->second == 0)
                {
                    myMap.erase(it);
                }
                if (!myMap.empty())
                {
                    cout << myMap.begin()->first << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 0)
        {
            int value;
            cin >> value;
            myMap[value]++;
            cout << myMap.begin()->first << endl;
        }
    }

    return 0;
}