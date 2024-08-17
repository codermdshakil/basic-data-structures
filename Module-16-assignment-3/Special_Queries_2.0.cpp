#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    queue<string> myQueue;

    for (int i = 0; i < n; ++i)
    {
        int number;
        cin >> number;

        if (number == 0)
        {
            string name;
            cin >> name;
            myQueue.push(name);
        }
        else if (number == 1)
        {
            if (!myQueue.empty())
            {
                cout << myQueue.front() << endl;
                myQueue.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}