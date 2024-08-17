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
        cout << myQueue.front() << endl;
        myQueue.pop();
        return;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
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