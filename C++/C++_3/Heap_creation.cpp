#include <bits/stdc++.h>

using namespace std;
class Maxheap
{
    int *arr;
    int size;
    int total_size;

public:
    Maxheap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }
    void insert(int x)
    {
        if (size == total_size)
        {
            cout << "Heap is full" << endl;
            return;
        }
        arr[size] = x;
        int index = size;
        size++;
        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
        cout << arr[index] << " is inserted into the heap " << endl;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void heapify(int index)
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        if (left < size && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest])
        {
            largest = right;
        }
        if (largest != index)
        {
            swap(arr[index], arr[largest]);
            heapify(largest);
        }
    }
    void Delete()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }
        cout << arr[0] << "deleter from heap" << endl;
        arr[0] = arr[size - 1];
        size--;
        if (size == 0)
            return;
        heapify(0);
    }
};
int main()
{
    Maxheap H1(6);
    H1.insert(10);
    H1.insert(20);
    H1.insert(15);
    H1.insert(5);
    H1.insert(25);
    H1.insert(30);
    H1.print();
    H1.insert(230);
    H1.print();
    H1.Delete();
    H1.print();

    return 0;
}