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
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum << endl;

    return 0;
}
// wdo that othert approach that should be badhhano sarvalo pachhi
// je pehela hoi teni temathi badbaki thai
// ane tene maxsum ma store karavi ne compare karavi max sum
// print karavi pan notice that SUBARRAY.