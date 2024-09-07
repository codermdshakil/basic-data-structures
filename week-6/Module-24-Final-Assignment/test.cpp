#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string, int>> data = {
        {"sakib", 1},
        {"rakib", 2},
        {"tasfia", 3},
        {"asfia", 4},
        {"afia", 5}};

    sort(data.begin(), data.end());

    // Display the sorted data
    for (const auto &entry : data)
    {
        cout << entry.first << " " << entry.second << endl;
       
    }

    return 0;
}