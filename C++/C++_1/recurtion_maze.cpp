#include <bits/stdc++.h>

using namespace std;
int countpathmaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return countpathmaze(n, i + 1, j) + countpathmaze(n, i, j + 1);
}

int main()
{
    cout << countpathmaze(3, 0, 0) << endl;

    return 0;
}
// first two path
// 1divide in two the foe each two path
// after ffor each
// for one for one and second for two
// tevuj biji  2divide