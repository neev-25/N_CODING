// #include <bits/stdc++.h>

// using namespace std;
// #define n 100
// class stack
// {
// public:
//     int *arr;
//     int top;

//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "Stack Overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = x;
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow" << endl;
//         }
//         top--;
//     }
//     int Top()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty()
//     {
//         return top == -1;
//     }
// };

// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.Top() << endl;
//     st.pop();
//     cout << st.Top() << endl;
//     st.pop;
//     st.pop;
//     st.pop;
//     cout << st.empty() << endl;

//     return 0;
// }
#include <iostream>

using namespace std;
const int n = 100;

class MyStack
{
public:
    int *arr;
    int top;

    MyStack()
    {
        arr = new int[n];
        top = -1;
    }

    ~MyStack()
    {
        delete[] arr;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top = top + 1;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl; // Outputs 3
    st.pop();
    cout << st.Top() << endl; // Outputs 2
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl; // Outputs 1 (true)

    return 0;
}
