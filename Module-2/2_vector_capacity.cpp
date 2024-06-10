#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // max_size() -> Returns the maximum size that the vector can hold.
    // cout << v.max_size() << endl;
    // cout <<"One - " <<  v.capacity() << endl; // one - capcity - 0

    // using push_back() push value to last of vector
    v.push_back(10);
    // cout << "Two - " << v.capacity() << endl; // Two - capcity - 1

    v.push_back(20);
    // cout <<"Three - " <<  v.capacity() << endl; // Three - capcity - 2

    v.push_back(30);
    // cout <<"Four - " <<  v.capacity() << endl; // Four - capcity - 4

    v.push_back(40);
    // cout << "Five - " << v.capacity() << endl;  // Five - capcity - 4

    v.push_back(50);
    // cout <<"Six - " <<  v.capacity() << endl;  // Six - capcity - 8 = (4*2)

    // v.push_back(60);
    // cout <<"Seven - " <<  v.capacity() << endl;  // Seven - capcity - 8

    // v.push_back(70);
    // cout <<"Eight - " <<  v.capacity() << endl;  // Eight - capcity - 8

    // v.push_back(80);
    // cout <<"Nine - " <<  v.capacity() << endl; // Nine - capcity - 8

    // v.push_back(90);
    // cout <<"Ten - " <<  v.capacity() << endl; // Ten - capcity - 16 = (8*2)

    // v.clear(); // just clear vector elements not delete memory
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    // cout << v[0] << endl;

    // if (v.empty())
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }

    // v.resize()
    v.resize(2);
    v.resize(7, 10);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << v[3] << endl;

    return 0;
}

/**
 * Summary
 * v.size() - length of vector
 * v.max_capacity() - Max capacity can hold vector
 * v.capcacity() - Returns the current available capacity of the vector.
 * v.clear() - clear vector elements not memory
 * v.empty() - return true/false if vector is empty return true otherwise false
 * v.resize() - resize value is 5 if i change it to resize(2) then baki gola delete hoye jabe
 *rezise value pore barale baki gulay ki man hobe bole dite hoy

*/