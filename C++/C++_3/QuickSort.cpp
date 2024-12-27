#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int st, int en)
{
    int pos = st;
    for (int i = st; i <= en; i++)
    {
        if (arr[i] <= arr[en])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quicksort(int arr[], int st, int en)
{
    if (st >= en)
    {
        return;
    }
    int pos = partition(arr, st, en);
    quicksort(arr, st, pos - 1);
    quicksort(arr, pos + 1, en);
}

int main()
{

    int arr[] = {6, 3, 21, 14, 214, 1, 1215, 14231};
    quicksort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}