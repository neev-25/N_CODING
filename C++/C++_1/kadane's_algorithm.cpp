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
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    cout << maxsum << endl;

    return 0;
}
// this is do that if negetive reject that
// and store it max sum but after jo koi run value ave
// to tene pan compare karvai maxsum j avi shake