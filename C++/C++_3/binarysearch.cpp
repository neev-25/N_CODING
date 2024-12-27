#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int st = 0;
    int en = n - 1;
    int mid;

    while (st <= en)
    {

        mid = (st + en) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            en = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    sort(arr, arr + n);
    cout << binarysearch(arr, n, key);

    return 0;
}