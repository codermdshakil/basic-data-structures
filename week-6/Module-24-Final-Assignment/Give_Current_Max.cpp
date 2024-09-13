#include <bits/stdc++.h>
using namespace std;

// create student object
class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    
    priority_queue<Student, vector<Student>, compare> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        pq.push({name, age, marks});
    }

    int q;
    cin >> q;

    while (q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            int age, marks;
            cin >> name >> age >> marks;
            pq.push({name, age, marks});
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}