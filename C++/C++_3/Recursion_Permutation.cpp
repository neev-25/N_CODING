#include <bits/stdc++.h>

using namespace std;

// simple coder
void permutation(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    if (visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < visited.size(); i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permutation(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

// baap coder
// void permutataion(vector<int> &arr, vector<vector<int>> &ans, int index)
// {
//     if (index == arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }
//     for (int i = index; i < arr.size(); i++)
//     {
//         swap(arr[index], arr[i]);
//         permutataion(arr, ans, index + 1);
//         swap(arr[index], arr[i]);
//     }
// }

int main()
{

    // simple coder
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(3, 0);
    permutation(arr, ans, temp, visited);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    // baap coder
    // vector<int> arr = {1, 2, 3};
    // vector<vector<int>> ans;
    // permutataion(arr, ans, 0);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}