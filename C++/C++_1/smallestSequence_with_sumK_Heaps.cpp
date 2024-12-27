#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setbits(x) __builtin_popcount(x)

signed main()
{
    int n, k;
    cin >> n >> k; // Corrected input format
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    // Max-heap to get the largest elements first
    priority_queue<int, vi> pq;
    rep(i, 0, n)
    {
        pq.push(a[i]);
    }

    int sum = 0;
    int cnt = 0;

    while (!pq.empty())
    {
        sum += pq.top();
        cout << pq.top() << endl;
        cout << sum << endl;
        pq.pop();
        cnt++;

        if (sum >= k)
        {
            cout << cnt << endl; // Output the count if sum >= k
            return 0;
        }
    }

    // If we exhaust the heap and still don't reach k
    cout << "-1" << endl;

    return 0;
}
