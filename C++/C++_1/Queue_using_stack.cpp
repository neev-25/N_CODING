// //**using double stack
// #include <bits/stdc++.h>

// using namespace std;

// class Queue
// {
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void push(int x)
//     {
//         s1.push(x);
//     }
//     int pop()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval = s2.top();
//         s2.pop();
//         return topval;
//     }
//     bool empty()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout << q.pop() << "\n";
//     q.push(5);
//     cout << q.pop() << "\n";
//     cout << q.pop() << "\n";
//     cout << q.pop() << "\n";
//     cout << q.pop() << "\n";
//     cout << q.pop() << "\n";

//     return 0;
// }

// // **usong single stack
#include <bits/stdc++.h>

using namespace std;

class Queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int temp = pop();
        s1.push(x);
        return temp;
    }
    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << "\n";
    q.push(5);
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";

    return 0;
}