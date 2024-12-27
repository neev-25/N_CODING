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

    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += x / a[i]; // how any insert in a\x of a[i]
                         // this is cout freq so we get ans in 1 2 3 ...
                         // ek tir do nissan
        x -= x / a[i] * a[i]; // this for subtact from x of a[i]
    }
    cout << ans << endl;

    return 0;
}