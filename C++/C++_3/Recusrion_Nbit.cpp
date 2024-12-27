#include <bits/stdc++.h>

using namespace std;

void bit(int arr[], int cnt0, int cnt1, int index, int n, vector<int> &temp, vector<vector<int>> &ans)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    if (cnt0 <= cnt1)
    {
        temp.push_back(arr[0]);
        bit(arr, cnt0 + 1, cnt1, index + 1, n, temp, ans);
        temp.pop_back();
    }
    temp.push_back(arr[1]);
    bit(arr, cnt0, cnt1 + 1, index + 1, n, temp, ans);
    temp.pop_back();
}

int main()
{

    vector<vector<int>> ans;
    vector<int> temp;
    int arr[] = {0, 1};
    int n = 4;
    int index = 0;
    bit(arr, 0, 0, index, n, temp, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}