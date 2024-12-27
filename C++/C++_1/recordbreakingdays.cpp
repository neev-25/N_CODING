#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 1];
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
    cout << mx << endl;

    return 0;
}
// thought of that _________ele(big all of them )and also
//                        _ele_(big all pf side two)
// set{1,1},{2,2},{2.2},{2,7}...