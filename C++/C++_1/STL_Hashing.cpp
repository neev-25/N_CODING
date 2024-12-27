#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setbits(x) __builtin_popcount(x)
//*for STL
// signed main()
// {
//     map<int, int> m;
//     m[8] = 2;
//     cout << m[8] << endl;

//     return 0;
// }

//*for count frequncy of elements
signed main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    map<int, int> freq;
    rep(i, 0, n)
    {
        freq[a[i]]++;
    }
    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}