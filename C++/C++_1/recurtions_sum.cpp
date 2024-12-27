#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = sum(n - 1);
    return prevsum + n;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}
// first sum n-1;
// then call to n-1;
// so on.. so when 0 so it is stop
// and when 0 hit so pop and add in n
// last we get sum