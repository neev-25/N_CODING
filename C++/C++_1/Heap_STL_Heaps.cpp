#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff find_first_of
#define ss second
#define setbits(x) builtin_popcount(x)

signed main()
{
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout << pq.top() << endl;
    pq.pop();

    return 0;
}