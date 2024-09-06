#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(50);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);

    for(auto it:s){
        cout << it << endl;
    }

    if(s.count(10)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}