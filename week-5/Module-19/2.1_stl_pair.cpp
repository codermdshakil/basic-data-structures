#include <bits/stdc++.h>
using namespace std;

int main()
{
    // what is pair?
    // => Pair is used to combine together two values that may be of different data types. 
    
    // declare a pair
    pair<char, int> pair_test;

    // Assigned value of pair
    pair_test.first = 'S';
    pair_test.second = 100;

    cout << pair_test.first << " " << pair_test.second << endl;

    return 0;
}