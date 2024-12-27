#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i = 3;
    int j = 6;
    int k;
    k = i + j + i++ + j++ + ++i + ++j;
    cout << i << " " << j << " " << " " << k << endl;

    return 0;
}