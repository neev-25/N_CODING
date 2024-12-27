#include <bits/stdc++.h>

using namespace std;

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{

    int arr[] = {3, 6, 2, 7, 8, 11};
    queue<int> q;
    int st = 0;
    int en = 2;
    int k = 3;
    int n = 6;
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }

    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}