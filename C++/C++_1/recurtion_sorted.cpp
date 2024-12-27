#include <bits/stdc++.h>

using namespace std;
bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restarray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restarray); // return that arr[0] and restarr
    // if (arr[0] < arr[1] && restarray == 1)
    // {
    //     return true;
    // }
}

int main()
{
    int arr[4] = {1, 3, 2, 4};
    cout << sorted(arr, 4) << endl;

    return 0;
}

// arr+1 means in arr 3 to 4 mate ane biju decrese n-1
// arr[0] < arr[1] means 1<3 true
// restarray means 2<4 true
// so ans is true
