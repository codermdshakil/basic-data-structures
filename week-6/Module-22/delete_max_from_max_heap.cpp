#include <bits/stdc++.h>
using namespace std;

// insert max heap
void insert_max_heap(vector<int> &v, int x)
{
    v.push_back(x);

    int cur_inx = v.size() - 1;

    while (cur_inx != 0)
    {
        int parent_inx = (cur_inx - 1) / 2;
        if (v[parent_inx] < v[cur_inx])
        {
            swap(v[parent_inx], v[cur_inx]);
        }
        else
            break;
        cur_inx = parent_inx;
    }
}

// delete from map heap
void delete_max_heap(vector<int> &v)
{

    // first node value = last node value
    v[0] = v[v.size() - 1];
    // delete last node
    v.pop_back();

    int cur_idx = 0;

    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // doitai ase left and right

            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur_idx]) // left is big
            {
                // now left is biger then currrent value so, swap
                swap(v[left_idx], v[cur_idx]);
                // change current index to left index
                cur_idx = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur_idx]) // right is big
            {
                // now right is biger then currrent value so, swap
                swap(v[right_idx], v[cur_idx]);
                // change current index to rightt index
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // left ase
            if (v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // right ase
            if (v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

// print heap values
void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_max_heap(v, x);
    }

    // called delete heap
    delete_max_heap(v);
    // print heap
    print_heap(v); // 25 20 6 15 5 3  // [30] remove

    delete_max_heap(v);
    print_heap(v); // 20 15 6 3 5  // [25] remove



    return 0;
}