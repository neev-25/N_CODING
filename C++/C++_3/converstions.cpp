#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int num = 13;
    // int rem, ans = 0, mul = 1;
    // while (num > 0)
    // {
    //     // rem = num % 2;    // reminder
    //     rem = num & 1;
    //     ans += rem * mul; // ans
    //     mul *= 10;        // mul
    //     // num /= 2;         // quootient
    //     num = num >> 1;
    // }
    // cout << ans;

    int bin;
    cin >> bin;
    int ans = 0, mul = 1;
    while (bin > 0)
    {
        int rem = bin % 10;
        ans += rem * mul;
        mul *= 2; // for binaary to desimal
        bin /= 10;
    }
    cout << ans;

    return 0;
}