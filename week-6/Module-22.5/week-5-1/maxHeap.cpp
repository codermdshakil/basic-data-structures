#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    void up_heapify(int cur_idx)
    {
        while (cur_idx != 0)
        {
            // children > parent
            if (nodes[cur_idx] > nodes[(cur_idx - 1) / 2])
            {
                swap(nodes[cur_idx], nodes[(cur_idx - 1) / 2]);
                cur_idx = (cur_idx - 1) / 2;
            }
        }
    }

    void push(int val)
    {
        nodes.push_back(val);
        up_heapify(nodes.size() - 1);
    }

    void down_heapify(int idx)
    {
        int largeIndex = idx;
        while (true)
        {
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;
            if (l < nodes.size() && nodes[largeIndex] < nodes[l])
                largeIndex = l;
            if (r < nodes.size() && nodes[largeIndex] < nodes[r])
                largeIndex = r;

            if (idx == largeIndex)
            {
                break;
            }
            swap(nodes[idx], nodes[largeIndex]);
            idx = largeIndex;
        }
    }

    void pop(int idx)
    {
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    void buildHeapFromArray(vector<int> arr)
    {
        nodes = arr;
        int lastNonLeafIndex = (nodes.size() / 2) - 1;

        for (int i = lastNonLeafIndex; i >= 0; i--)
        {
            down_heapify(i);
        }
    }

    int extractMax()
    {
        int max = nodes[0];
        pop(0);
        return max;
    }

    void print()
    {
        for (int node : nodes)
        {
            cout << node << " ";
        }
        cout << endl;
    }
};

int main()
{

    MaxHeap heap;
    heap.push(1);
    heap.push(2);
    heap.push(3);
    heap.push(4);
    heap.push(5);

    // pass index to delete value
    // heap.pop(0);
    // heap.pop(1);
    // vector<int> v = {2, 3, 4, 8, 11, 10, 9, 6};

    // Make heap from array
    //-----------------------

    // heap.buildHeapFromArray(v);
    // heap.print(); // 5 4 2 1 3

    // Get max value
    // ----------------

    // cout << heap.extractMax() << " ";
    // cout << heap.extractMax() << " ";

    
 

    return 0;
}