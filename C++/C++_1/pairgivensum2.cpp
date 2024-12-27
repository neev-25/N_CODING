#include <bits/stdc++.h>

using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{

    int n;

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsum(arr, 8, k) << endl;

    return 0;
}
// that is famous method for reduce loop
// vadhre to agal ne niche lavo and add that
// ocho to pachal ne agal lavo and add tht
// after that check that