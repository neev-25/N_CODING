#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[6] = {1, 3, 36, 6, 64, 9};
    int n = 6;
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
        count++; // for reduce time complecity
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}