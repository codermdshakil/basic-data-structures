#include <bits/stdc++.h>
using namespace std;

int main()
{

    //  Follow MaxHeap -> grater to smaller [Heap sort]
    priority_queue<int> pq;
    while (true)
    {
        int command;
        cin >> command;

        // 0 means - insert
        // 1 means - delete
        // 2 means - show top
        // 3 means - terminate

        if (command == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // o(logN)
        }
        else if (command == 1)
        {
            pq.pop(); // o(logN)
        }
        else if (command == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}