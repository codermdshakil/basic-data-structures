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

    void print(){
        for(int node : nodes){
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
    heap.print();


    return 0;
}