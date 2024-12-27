#include <bits/stdc++.h>

using namespace std;
int kadanesum(int arr[], int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum = 0;
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadanesum(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadanesum(arr, n);
    cout << nonwrapsum << endl;
    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}
// taht is do that all sum by kadane and after taht
// reverse sign and subtract that element which is negative
//  and given real max sum