#include <bits/stdc++.h>
using namespace std;
// push method of queue
void namePush(queue<string> &myQueue, string strName)
{
    myQueue.push(strName);
}

// get front of queue
void getName(queue<string> &myQueue)
{
    if (!myQueue.empty())
    {
        cout << myQueue.front() << "\n";
        myQueue.pop();
        return;
    }
    else
    {
        cout << "Invalid" << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<string> myQueue;
    int test;
    cin >> test;
    while (test--)
    {
        int number;
        cin >> number;

        if (number == 0)
        {
            string names;
            cin >> names;
            namePush(myQueue, names);
        }
        else if (number == 1)
        {
            getName(myQueue);
        }
    }

    return 0;
}