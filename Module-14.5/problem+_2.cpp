#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;
    bool flag = false;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!st.empty() && !q.empty())
    {
        if (n != m)
        {
            flag = false;
            break;
        }
        else
        {
            if (st.top() == q.front())
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }

    return 0;
}