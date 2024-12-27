// #include <bits/stdc++.h>

// using namespace std;

// class Queue
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;

// public:
//     Queue(int n)
//     {
//         arr = new int[n];
//         front = rear = -1;
//         size = n;
//     }
//     bool isempty()
//     {
//         return (front == -1);
//     }
//     bool isfull()
//     {
//         return (rear == size - 1);
//     }
//     void push(int x)
//     {
//         if (isfull())
//         {
//             cout << "over flow" << endl;
//             return;
//         }
//         if (isempty())
//         {
//             cout << "pushed " << x << " into the queue" << endl;
//             front = rear = 0;
//             arr[0] = x;
//         }
//         else
//         {
//             rear++;
//             arr[rear] = x;
//             cout << "pushed " << x << " into the queue" << endl;
//         }
//     }
//     void pop()
//     {
//         if (isempty())
//         {
//             cout << "under flow" << endl;
//             return;
//         }
//         else
//         {
//             if (front == rear)
//             {
//                 cout << "poped " << arr[front] << " into the queue" << endl;
//                 front = rear = -1;
//             }
//             else
//             {
//                 cout << "popped " << arr[front] << " into the queue" << endl;
//                 front = front + 1;
//             }
//         }
//     }
//     int start()
//     {
//         if (isempty())
//         {
//             cout << "queue is empty" << endl;
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
// };
// int main()
// {
//     Queue q(5);
//     q.push(5);
//     q.push(15);
//     q.push(51);
//     cout << q.start() << endl;
//     q.pop();
//     cout << q.start() << endl;
//     q.push(478);
//     q.push(32);
//     q.push(43);
//     q.push(47);
//     q.pop();
//     q.pop();
//     q.pop();
//     int x = q.start();
//     if (!q.isempty())
//     {
//         cout << x << endl; // this is for not print -1 because ...
//     }
//     q.pop();
//     q.pop();
//     q.pop();

//     return 0;
// }

// implement by circular array
#include <bits/stdc++.h>

using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n)
    {
        arr = new int[n];
        front = rear = -1;
        size = n;
    }
    bool isempty()
    {
        return (front == -1);
    }
    bool isfull()
    {
        return ((rear + 1) % size == front);
    }
    void push(int x)
    {
        if (isfull())
        {
            cout << "over flow" << endl;
            return;
        }
        if (isempty())
        {
            cout << "pushed " << x << " into the queue" << endl;
            front = rear = 0;
            arr[0] = x;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed " << x << " into the queue" << endl;
        }
    }
    void pop()
    {
        if (isempty())
        {
            cout << "under flow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "poped " << arr[front] << " into the queue" << endl;
                front = rear = -1;
            }
            else
            {
                cout << "popped " << arr[front] << " into the queue" << endl;
                front = (front + 1) % size;
            }
        }
    }
    int start()
    {
        if (isempty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{
    // Queue q(5);
    // q.push(5);
    // q.push(15);
    // q.push(51);
    // cout << q.start() << endl;
    // q.pop();
    // cout << q.start() << endl;
    // q.push(478);
    // q.push(32);
    // q.push(43);
    // q.push(47);
    // q.pop();
    // q.pop();
    // q.pop();
    // int x = q.start();
    // if (!q.isempty())
    // {
    //     cout << x << endl; // this is for not print -1 because ...
    // }
    // q.pop();
    // q.pop();
    // q.pop();

    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.push(125);
    q.pop();
    q.push(32);
    q.push(43);
    q.pop();

    return 0;
}