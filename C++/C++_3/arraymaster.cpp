#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[6] = {1, 24, 54, 63, 22, 56};
    int i = 0, j = 5;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}