#include <bits/stdc++.h>

using namespace std;

int main()
{

    // int arr[7] = {2, 5, 35, 87, 4, 56, 33};
    // for (int i = 0; i < 6; i++)
    // {
    //     int index = i;
    //     for (int j = i + 1; j < 7; j++)
    //     {
    //         if (arr[j] < arr[index])
    //         {
    //             index = j;
    //         }
    //             }
    //     swap(arr[i], arr[index]);
    // }
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // hw
    int arr[6] = {1, 33, 44, 3, 6, 7};
    for (int i = 5; i >= 0; i--)
    {
        int index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    for (int k = 5; k >= 0; k--)
    {
        cout << arr[k] << " ";
    }

    return 0;
}