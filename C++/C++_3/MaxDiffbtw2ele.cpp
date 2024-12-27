#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int surfix = INT_MIN;
    int diff = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        surfix = max(surfix, arr[i]);
        diff = max(diff, surfix - arr[i]);
    }
    cout << diff;

    return 0;
}