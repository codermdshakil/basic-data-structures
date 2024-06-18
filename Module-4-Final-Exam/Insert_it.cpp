#include <bits/stdc++.h>
using namespace std;

int main()
{

    // original array
    int first_size;
    cin >> first_size;

    // create vector array for dynamic size increase
    vector<int> ar(first_size);

    // take original array input
    for (int i = 0; i < first_size; i++)
    {
        cin >> ar[i];
    }

    // second array
    int second_size;
    cin >> second_size;
    // create vector array for dynamic size increase
    vector<int> ar_second(second_size);

    // take second array input
    for (int i = 0; i < second_size; i++)
    {
        cin >> ar_second[i];
    }
    // take position input
    int x_positon;
    cin >> x_positon;

    // insert second array in original array
    ar.insert(ar.begin() + x_positon, ar_second.begin(), ar_second.end());

    // print original array 
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}