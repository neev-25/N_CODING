#include <bits/stdc++.h>

using namespace std;

int main()
{

    // priority_queue<int> p;//maxheap
    // p.push(5);
    // p.push(3);
    // p.push(8);
    // p.push(1);
    // p.push(4);
    // p.push(2);
    // p.push(6);
    // p.push(7);
    // cout << p.top() << endl;
    // p.pop();
    // cout << p.top() << endl;
    // cout << p.size() << endl;
    // while (!p.empty())
    // {
    //     cout << p.top() << endl;
    //     p.pop();
    // }

    // minheap
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);
    p.push(3);
    p.push(8);
    p.push(1);
    p.push(4);
    p.push(2);
    p.push(6);
    p.push(7);
    cout << p.top() << endl;
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }

    return 0;
}