// #include <bits/stdc++.h>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int n)
//     {
//         data = n;
//         next = NULL;
//     }
// };

// class Queue
// {
//     Node *front;
//     Node *rear;

// public:
//     Queue()
//     {
//         front = rear = NULL;
//     }
//     bool isEmpty()
//     {
//         return front == NULL;
//     }
//     void push(int x)
//     {
//         // empty
//         if (isEmpty())
//         {
//             cout << "pushed" << x << "into queue";
//             rear = front = new Node(x);
//             return;
//         }
//         else
//         {

//             rear->next = new Node(x);
//             if (rear->next == NULL)
//             {
//                 cout << "queue is overfull" << endl;
//                 return;
//             }
//             cout << "pushed" << x << "into queue";
//             rear = rear->next;
//         }

//         // nono empty
//     }
//     void pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty" << endl;
//             return;
//         }
//         else
//         {
//             cout << "popped" << front->data << endl;
//             Node *temp = front;
//             front = front->next;
//             delete temp;
//         }
//     }
//     int start()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         else
//         {
//             return front->data;
//         }
//     }
// };

// int main()
// {
//     Queue q;
//     q.push(5);
//     q.push(15);
//     q.push(20);
//     q.push(25);
//     q.pop();
//     cout << q.start() << endl;

//     return 0;
// }

// queue implement using STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(32);
    q.push(45);
    q.push(56);
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    return 0;
}
