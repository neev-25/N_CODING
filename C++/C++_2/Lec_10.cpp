#include <bits/stdc++.h>

using namespace std;

// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void swapalternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

int main()
{

    // int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    // int odd[7] = {3, 8, 5, 2, 9, 4, 7};

    // swapalternate(even, 8);
    // printarray(even, 8);
    // swapalternate(odd, 7);
    // printarray(odd, 7);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

    return 0;
}