#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class Dequeue
{
    Node *front, *rear;

public:
    Dequeue()
    {
        front = rear = NULL;
    }

    // push_front
    void push_front(int x)
    {
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << " pushed " << x << " in front in dequeue " << endl;
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout << " pushed " << x << " in front in dequeue " << endl;
            return;
        }
    }
    // push_back
    void push_back(int x)
    {
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << " pushed " << x << " in back in dequeue " << endl;
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout << " pushed " << x << " in back in dequeue " << endl;
            return;
        }
    }
    // pop_front
    void pop_front()
    {
        if (front == NULL)
        {
            cout << " dequeue underflow " << endl;
            return;
        }
        else
        {
            Node *temp = front;
            cout << " popped " << temp->data << " from front " << endl;
            front = front->next;
            delete temp;
            if (front)
                front->prev = NULL;
            else
                rear = NULL;
        }
    }
    // pop_back
    void pop_back()
    {
        if (front == NULL)
        {
            cout << " dequeue underflow " << endl;
            return;
        }
        else
        {
            Node *temp = rear;
            cout << " popped " << rear->data << " from back" << endl;
            rear = rear->prev;
            delete temp;
            if (rear)
                rear->next = NULL;
            else
                front = NULL;
        }
    }
    // start
    int start()
    {
        if (front == NULL)
        {
            return -1;
        }
        else
        {
            return front->data;
        }
    }
    // end
    int end()
    {
        if (rear == NULL)
        {
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
};
int main()
{
    Dequeue d;
    d.push_front(10);
    d.push_back(87);
    cout << d.start() << endl;
    d.push_front(28);
    cout << d.start() << endl;
    d.pop_front();
    cout << d.start() << endl;
    cout << d.end() << endl;
    d.pop_back();
    cout << d.end() << endl;

    return 0;
}