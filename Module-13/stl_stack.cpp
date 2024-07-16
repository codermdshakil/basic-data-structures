#include <bits/stdc++.h>
using namespace std;

int main()
{

    // stl stack built in function
    stack<int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while (st.empty() != true)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}