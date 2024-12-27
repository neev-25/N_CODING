#include <bits/stdc++.h>

using namespace std;
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    dec(n - 1);
}
void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    dec(n);
    inc(n);
    return 0;
}
// for dec
// 5 to call 4
// 4 to call 3
// 3 to call 2
// 2 to call 1
// 1 to call 0
// then print for 5 4 3 2 1
// for inc
// 1 to call 2
// 2 to call 3
// 3 to call 4
// 4 to call 5
// then print for 1 2 3 4 5
