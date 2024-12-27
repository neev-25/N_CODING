#include <bits/stdc++.h>

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<int, vector<int>, greater<int>> minheap;
    for (int i = 0; i < n; i++)
    {
        minheap.push(a[i]);
    }
    int ans = 0;
    while (minheap.size() > 1)
    {
        int x = minheap.top();
        minheap.pop();
        int y = minheap.top();
        minheap.pop();
        ans += x + y;
        minheap.push(x + y);
    }
    cout << ans << endl;

    return 0;
}