#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int num;
    Person(string name, int num)
    {
        this->name = name;
        this->num = num;
    }
};

// compare class
class cmp
{
public:
    bool operator()(Person &a, Person &b)
    {
        if (a.name != b.name)
        {
            return a.name > b.name;
        }
        else
        {
            return a.num < b.num;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<Person, vector<Person>, cmp> pq;

    // take input and push it to priority queue
    for (int i = 0; i < n; i++)
    {
        string name;
        int x;
        cin >> name >> x;
        Person Obj(name, x);
        pq.push(Obj);
    }

    // print values
    while (!pq.empty())
    {
        Person p = pq.top();
        cout << p.name << " " << p.num << endl;
        pq.pop();
    }

    return 0;
}