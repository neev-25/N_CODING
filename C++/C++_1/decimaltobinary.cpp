#include <bits/stdc++.h>

using namespace std;

int decimaltobinary(int n)
{
    int x = 1;
    int ans = 0;
    while (n > 0)
    {
        int temp = n % 2;
        ans += (temp * x);
        n /= 2;
        x *= 10;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimaltobinary(n) << endl;
    return 0;
}
//