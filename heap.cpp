#include <iostream>
#include<queue>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            return;
        }

        arr[1] == arr[size];
        size--;

        // take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;

            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }

            else if (rightindex > size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }

            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 0; i <= size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(10);
    h.insert(80);
    h.insert(50);
    h.print();
    // h.deletefromheap();
    // h.print();

    // int arr[6] = {-1, 54, 53, 55, 52, 50};
    // int n = 5;
    // cout << endl;
    // for (int i = n / 2; i > 0; i--)
    // {
    //     heapify(arr, n, i);
    // }
    // cout << "printing" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout<<endl;
    // heapsort(arr , n);
    // cout << "printing" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // //max heap
    // priority_queue<int> pq;

    // pq.push(3);
    // pq.push(4);
    // pq.push(5);
    // pq.push(2);

    //min heap
    priority_queue<int , vector<int> , greater<int> > minheap;
}

// min heapify
/*
#include <bits/stdc++.h>
void heapify(vector<int> &arr, int n, int i)
{

    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[smallest] > arr[left])
    {
        smallest = left;
    }

    if (right < n && arr[smallest] > arr[right])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    return arr;
}
*/
