#include <bits/stdc++.h>

using namespace std;

int numberofones(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << numberofones(19) << endl;
    return 0;
}
// number of count equal to umber of 1 in binary 19
