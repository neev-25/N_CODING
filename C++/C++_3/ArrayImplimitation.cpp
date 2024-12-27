#include <bits/stdc++.h>

using namespace std;

int main()
{
    // intilize of array in different things
    //  int arr[5];
    //  for (int i = 0; i < 5; i++)
    //  {
    //      cin >> arr[i];
    //  }

    //  int arr[5] = {1, 2, 3, 4, 5};
    //  for (int i = 0; i < 5; i++)
    //  {
    //      cout << arr[i] << " ";
    //  }

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << arr[4];

    // int arr[5] = {1, 4, 2, 4, 5};
    // cout << sizeof(arr);
    // cout << sizeof(arr) / sizeof(arr[0]);

    int arr[5] = {2, 45, 55, 5, 66};
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max << " " << min;

    return 0;
}