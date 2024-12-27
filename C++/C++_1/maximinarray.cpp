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
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > maxno)
        //{
        //  maxno = arr[i]
        //}
        maxno = max(maxno, arr[i]);
        // if (arr[i] < minno)
        //{
        //   minno = arr[i];
        //}
        minno = min(minno, arr[i]);
    }
    cout << maxno << " " << minno << endl;

    return 0;
}
//