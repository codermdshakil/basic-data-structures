#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node * next;
};

int main(){
    
    Node x, y;
    x.val = 10;
    y.val = 20;

    // linked  
    x.next = &y;
    cout << x.val << " " << y.val;
    return 0;
}