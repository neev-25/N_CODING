#include <bits/stdc++.h>

using namespace std;
void subseq(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    subseq(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    subseq(arr, index + 1, n, ans, temp);
    temp.pop_back();
}

void subseqstr(string s, int index, int n, vector<string> &ans, string &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    subseqstr(s, index + 1, n, ans, temp);
    temp.push_back(s[index]);
    subseqstr(s, index + 1, n, ans, temp);
    temp.pop_back();
}

void paranthesis(int n, int left, int right, vector<string> &ans, string &temp)
{
    if (left + right == 2 * n)
    {
        ans.push_back(temp);
        return;
    }
    if (left < n)
    {
        temp.push_back('(');
        paranthesis(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    if (right < left)
    {
        temp.push_back(')');
        paranthesis(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

void subsetsum(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    subsetsum(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    subsetsum(arr, index + 1, n, ans, temp);
    temp.pop_back();
}

bool find(int arr[], int index, int n, int target)
{
    if (target == 0)
    {
        return true;
    }
    if (index == n || target < 0)
    {
        return false;
    }

    return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);
}

int find2(int arr[], int index, int n, int target)
{
    if (target == 0)
    {
        return true;
    }
    if (target < 0 || index == n)
    {
        return false;
    }
    return find2(arr, index + 1, n, target) + find2(arr, index + 1, n, target - arr[index]);
}

int find3(int arr[], int index, int n, int target)
{
    if (index == n)
    {
        return target == 0;
    }
    return find3(arr, index + 1, n, target) + find3(arr, index + 1, n, target - arr[index]);
}

int find4(int arr[], int index, int n, int target)
{
    if (target == 0)
    {
        return true;
    }
    if (target < 0 || index == n)
    {
        return false;
    }
    return find4(arr, index + 1, n, target) + find4(arr, index, n, target - arr[index]);
}

int main()
{

    // int arr[] = {1, 2, 3};
    // vector<vector<int>> ans;
    // vector<int> temp;
    // subseq(arr, 0, 3, ans, temp);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // string s = "abcd";
    // vector<string> ans;
    // string temp;
    // subseqstr(s, 0, 8, ans, temp);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }
    // timepass
    // int sum = 0;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    //     if (!ans[i].empty())
    //     {
    //         sum += stoi(ans[i]);
    //     }
    // }
    // cout << sum << endl;

    // int n = 3;
    // vector<string> ans;
    // string temp;
    // paranthesis(n, 0, 0, ans, temp);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }

    int arr[] = {3, 4, 5};
    vector<int> temp;
    vector<vector<int>> ans;
    subsetsum(arr, 0, 3, ans, temp);
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < ans[i].size(); j++)
        {
            sum += ans[i][j];

            cout << ans[i][j] << " ";
        }
        cout << " = " << sum;
        cout << endl;
    }

    // int arr[] = {2, 4, 1, 8, 7};
    // int target = 11;
    // cout << find(arr, 0, 5, target) << " ";

    // int arr[] = {5, 2, 3, 10, 6, 8};
    // int target = 10;
    // cout << find2(arr, 0, 6, target) << " ";

    // int arr[] = {1, 2, 0, 1};
    // int target = 2;
    // cout << find3(arr, 0, 4, target) << " ";

    // int arr[] = {2, 3, 4};
    // int target = 6;
    // cout << find4(arr, 0, 3, target) << " ";

    return 0;
}
