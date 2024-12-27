#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prevfact = fact(n - 1);
    return n * prevfact;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}
// n!=n*n-1*n-2*.......*1;
// n!=n*(n-1)!
// n!=n*(n-1)*(n-2)!;
// and so on
// when 0!=1
// then call it previous and do that
// 5*fact(4)
// 5*4*fact(3)
// 5*4*3*fact(2)
// 5*4*3*2*fact(1)
// 5*4*3*2*1*fact(0)
// 5*4*3*2*1*1 amd call it
