#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    return 0;
}
// this is use 42 ane 24
// javab 18
// 24 ane 18
// javab 6
// 6 ane 0
// to hve b=0
// hovathi javab 6