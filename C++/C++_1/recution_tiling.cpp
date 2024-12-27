#include <bits/stdc++.h>

using namespace std;
int tilingways(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return tilingways(n - 1) + tilingways(n - 2);
}

int main()
{
    cout << tilingways(4) << endl;

    return 0;
}
// if vertical so we out the one
// if horizontly so we put two
// bacause total size 2*4
// til size 2*1
// so fot it