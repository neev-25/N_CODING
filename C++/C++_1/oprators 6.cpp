#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 15, j = 20;
    int k;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    return 0;
}