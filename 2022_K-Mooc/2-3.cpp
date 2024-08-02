#include<iostream>
#include<vector>
#include<deque>

using namespace std;

vector<int> heap;

void swap(int a, int b)
{
    int c = heap[b];
    heap[b] = heap[a];
    heap[a] = c;
}

void heap_push(int num)
{
    heap.push_back(num);

    if (heap.size() != 1)
    {
        int child = heap.size() - 1;
        int parent = (child+1)/2 -1;
        
        while(heap[parent] > heap[child])
        {
            swap(parent, child);
            child = parent + 1;
            parent = (child+1)/2 - 1;
        }
    }
}

int heap_pop()
{
    int result= heap.front();

    swap(0, heap.size()-1);
    heap.pop_back();

    int parent = 1;
    int child = parent * 2;

    if(child + 1 <= heap.size())
        child = (heap[child-1] < heap[child]) ? child : child+1;

    while (child <= heap.size() && heap[parent-1] > heap[child-1])
    {
        swap(parent-1, child-1);

        parent = child;
        child = child*2;

        if(child+1 <= heap.size())
            child = (heap[child-1] < heap[child])?child:child+1;
    }



    return result;
}

int main()
{
    int N, num;

    cin >> N;

    for(int i=0;i<N;i++)
    {
        cin >> num;
        if(num != 0)
            heap_push(num);
        else    cout << heap_pop() << endl;
    }
    
    return 0;
}