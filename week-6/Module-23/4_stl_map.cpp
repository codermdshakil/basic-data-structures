#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> mp;
    mp.insert({"Sakib Al Hassan", 75});
    mp.insert({"Tamim Iqbal", 19});
    mp.insert({"Rahat", 100});
    mp.insert({"akib", 0});
    mp.insert({"Shakil", 150});
    mp.insert({"Shamim", 75});

    // Print all map value
    // for(auto it = mp.begin(); it != mp.end(); it++){
    //     cout << it->first << " " << it->second << endl;
    // }

    // Print a specific value
    // cout << mp["Shakil"] << endl;
    // cout << mp["Rahat"] << endl;
    // cout << mp["Shamim"] << endl;

    // if value if found then print ase otherwise print nai
    // if (mp.count("shakil"))
    // {
    //     cout << "Ase : " << mp["Shakil"] << endl;
    // }
    // else
    // {
    //     cout << "Nai" << endl;
    // }

    return 0;
}