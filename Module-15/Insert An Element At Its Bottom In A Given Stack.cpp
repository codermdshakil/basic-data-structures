#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare two stack 
    stack<int> st, newSt;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);

    // st stack elements move in to newSt
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    // push at the top new value
    newSt.push(9);

    // move newSt elements in to st
    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }

    // print st
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}