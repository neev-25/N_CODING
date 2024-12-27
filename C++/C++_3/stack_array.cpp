#include <bits/stdc++.h>

using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    bool flag;
    // constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }
    // push
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stck Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "pushed " << value << " into the stack " << endl;
            flag = 0;
        }
    }
    // pop
    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            cout << "popped " << arr[top] << " from the stack" << endl;
            top--;
            if (top == -1)
            {
                flag = 1;
            }
        }
    }
    // peek
    int peek()
    {
        if (top == -1)
        {
            cout << "stck empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    // isempty
    bool isempty()
    {
        return top == -1;
    }
    // issize
    int issize()
    {
        return top + 1;
    }
};

int main()
{
    // Stack s(5);
    // s.push(10);
    // s.push(19);
    // s.push(119);
    // s.push(28);
    // s.push(282);
    // s.push(122);

    // Stack s(5);
    // s.push(10);
    // s.push(19);
    // s.push(119);
    // s.push(28);
    // s.push(282);
    // s.push(122);

    // Stack s(5);
    // s.push(10);
    // s.push(19);
    // s.push(119);
    // s.pop();
    // s.pop();
    // s.pop();

    // Stack s(5);
    // s.push(10);
    // s.push(19);
    // s.push(119);
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();

    // Stack s(5);
    // s.push(7);
    // s.push(8);
    // s.push(9);
    // cout << s.peek() << endl;
    // s.pop();
    // cout << s.peek() << endl;
    // cout << s.isempty() << endl;
    // s.pop();
    // s.pop();
    // cout << s.isempty() << endl;
    // s.pop();
    // cout << s.isempty() << endl;

    Stack s(5);
    s.push(-1);
    int value = s.peek();
    if (s.flag == 0)
    {
        cout << value << endl;
    }

    return 0;
}