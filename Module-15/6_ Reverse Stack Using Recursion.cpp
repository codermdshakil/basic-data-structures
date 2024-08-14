void reverseStack(stack<int> &s) {

    // basecase
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    reverseStack(s);

    // copy elements to cp stack
    stack<int> cp;
    while(!s.empty()){
        cp.push(s.top());
         s.pop();
    }

    // push x value to the top of cp stack
    cp.push(x);

    while(!cp.empty()){
        s.push(cp.top());
        cp.pop();
    }
    
}