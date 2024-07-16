#include <bits/stdc++.h>
using namespace std;

// stack using array library vector
class myStack
{
public:
    vector<int> v;

    // push to back -> O(1)
    void push(int val)
    {
        v.push_back(val);
    }

    // push from back -> O(1)
    void pop()
    {
        v.pop_back();
    }

    // access top element -> O(1)
    int top()
    {
        return v.back();
    }

    // size of stack -> O(1)
    int size()
    {
        return v.size();
    }

    // stack in empty or not 
    bool empty(){
        if(v.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }


};

int main()
{
    // declare stack from main
    myStack st;

    return 0;
}