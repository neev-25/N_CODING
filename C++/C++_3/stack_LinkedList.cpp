#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top == NULL;
        size = 0;
    }
    // push
    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "overflow\n";
            return;
        }
        else
        {

            temp->next = top;
            top = temp;
            size++;
            cout << "pushed " << value << "from stack\n";
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "popeed " << top->data << "from stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if (top == NULL)
        {
            cout << "empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    bool isempty()
    {
        return top == NULL;
    }
    int issize()
    {
        return size;
    }
};

int main()
{
    // Stack s;
    // s.push(6);
    // s.push(28);
    // s.push(18);
    // s.push(17);

    Stack s;
    s.push(6);
    s.push(28);
    s.push(18);
    s.push(17);
    s.pop();
    cout << s.issize() << endl;
    cout << s.peek() << endl;
    s.pop();
    cout << s.issize() << endl;
    cout << s.peek() << endl;
    s.pop();
    s.pop();
    cout << s.peek() << endl;

    return 0;
}