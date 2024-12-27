#include <bits/stdc++.h>

using namespace std;

int binarytodesimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int decimaltobinary(int n)
{
    int x = 1;
    int ans = 0;
    while (n > 0)
    {
        int temp = n % 2;
        ans = ans + (temp * x);
        n = n / 2;
        x *= 10;
    }

    return ans;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int temp = binarytodesimal(x) + binarytodesimal(y);
    cout << decimaltobinary(temp) << endl;

    return 0;
}
// this is logic