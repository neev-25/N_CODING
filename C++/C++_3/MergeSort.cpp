#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int st, int mid, int en)
{
    vector<int> temp(en - st + 1);
    int left = st, right = mid + 1, index = 0;
    while (left <= mid && right <= en)
    {
        if (arr[left] < arr[right])
        {
            temp[index++] = arr[left];
            left++;
        }
        else
        {
            temp[index++] = arr[right];
            right++;
        }
    }
    while (left <= mid)
    {
        temp[index++] = arr[left];
        left++;
    }
    while (right <= en)
    {
        temp[index++] = arr[right];
        right++;
    }
    index = 0;
    while (st <= en)
    {
        arr[st] = temp[index];
        st++;
        index++;
    }
    // or
    //  for (int i = st; i <= en; i++)
    //  {
    //      arr[i] = temp[i - st];
    //  }
}
void mergesort(int arr[], int st, int en)
{
    if (st == en)
    {
        return;
    }
    int mid = st + (en - st) / 2;
    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, en);
    merge(arr, st, mid, en);
}

int main()
{

    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    int n = 10;
    mergesort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}