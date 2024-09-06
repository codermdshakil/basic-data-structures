#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> identity;

    // 1st way to assign key value
    identity["Rahim"] = 18;
    identity["Karim"] = 20;
    identity["Shakil"] = 20;
    identity["Noyon"] = 23;
    identity["Nadim"] = 21;

    // 2nd way to assign key value
    identity.insert(make_pair("Asraf", 22));
    identity.insert(make_pair("Asraf", 25));

    // 3d way to assign key value
    identity.insert({"Mahfuj", 22});
    identity["Mahfuj"] = 26; // now it update it value

    // 1 - Print a specific key value
    // cout << identity["Rahim"] << endl;

    // 2 - Print all value of map
    // for (auto it = identity.begin(); it != identity.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // 3  using for print map all values
    for (auto pairs : identity)
    {
        cout << pairs.first << " " << pairs.second << endl;
    }

    // 4 - if key value have in map then just print
    // if (identity.count("Shakil"))
    // {
    //     cout << identity["Shakil"] << endl;
    // }
    // else
    // {
    //     cout << "Not Found " << endl;
    // }

    return 0;
}