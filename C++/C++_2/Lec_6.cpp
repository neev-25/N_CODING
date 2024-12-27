#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int ans = 0;
    // int i = 1;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * i) + ans;
    //     n = n >> 1;
    //     i *= 10;
    // }
    // cout << ans;

    int m;
    cin >> m;
    m = -m;
    // int com1 = ~m;
    // int com2 = com1 + 1;
    // cout << com2;
    int ans = 0;
    int i = 1;
    while (m != 0)
    {
        int bit = m & 1;
        ans = (bit * i) + ans;
        m = m >> 1;
        i = i * 10;
    }
    cout << ans;
    int cm1 = ans ^ 1;
    int cm2 = cm1 + 1;
    cout << cm2;
}
