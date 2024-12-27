#include <bits/stdc++.h>

using namespace std;

class Dequeue
{
public:
    int front, rear, size;
    int *arr;
    Dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }
    bool isempty()
    {
        return front == -1;
    }
    bool isfull()
    {
        return (rear + 1) % size == front;
    }
    void push_front(int x)
    {
        if (isempty())
        {
            front = rear = 0;
            cout << "pushed" << x << "in dequeue" << endl;
            arr[0] = x;
            return;
        }
        else if (isfull())
        {
            cout << "Dequeue is full" << endl;
            return;
        }
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            cout << "pushed" << x << "in front" << endl;
            return;
        }
    }
    void push_back(int x)
    {
        if (isempty())
        {
            front = rear = 0;
            cout << "pushed" << x << "in dequeue" << endl;
            arr[0] = x;
            return;
        }
        else if (isfull())
        {
            cout << "Dequeue is full" << endl;
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed" << x << "in back" << endl;
            return;
        }
    }
    void pop_front()
    {
        if (isempty())
        {
            cout << "dequue underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
        }
    }
    void pop_back()
    {
        if (isempty())
        {
            cout << "dequue underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                rear = (rear - 1 + size) % size;
            }
        }
    }
    int start()
    {
        if (isempty())
            return -1;
        else
            return arr[front];
    }

    int end()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};

int main()
{
    Dequeue d(5);
    d.push_back(19);
    cout << d.start() << endl;
    d.push_back(27);
    d.push_front(90);
    cout << d.end() << endl;
    d.pop_back();
    d.pop_front();
    cout << d.end() << endl;
    d.push_back(283);
    d.push_front(38);
    cout << d.start() << endl;
    cout << d.end() << endl;

    return 0;
}