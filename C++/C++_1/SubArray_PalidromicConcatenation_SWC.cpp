#include <bits/stdc++.h>

using namespace std;

bool isPalidrome(int n)
{
    int temp = n, number = 0;
    while (temp > 0)
    {
        number = number * 10 + temp % 10;
        temp = temp / 10;
    }
    if (number == n)
    {
        return true;
    }
    return false;
}

int findPalidromeSubarray(vector<int> arr, int k)
{
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }
    if (isPalidrome(num))
    {
        return 0;
    }
    for (int j = k; j < arr.size(); j++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + arr[j];
        if (isPalidrome(num))
        {
            return j - k + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 1, 5};
    int k = 4;
    int ans = findPalidromeSubarray(arr, k);
    if (ans == -1)
    {
        cout << "No palidrome subarray found" << endl;
    }
    else
    {
        for (int i = ans; i < ans + k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}