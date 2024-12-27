#include <bits/stdc++.h>

using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevpower = power(n, p - 1);
    return prevpower * n;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << endl;

    return 0;
}
// p call p-1
// p-1 call p-2
// so on .. and when p=0 so it return 1;
// after than 1*p rest to 1
// so it return n^p