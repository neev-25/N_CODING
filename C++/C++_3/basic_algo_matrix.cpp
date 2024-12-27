#include <bits/stdc++.h>

using namespace std;

void printsum(int matrix[][3], int row, int col)
{
    int first = 0;
    int sec = 0;
    int i = 0;
    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }
    int j = col - 1;
    i = 0;
    while (j >= 0)
    {
        sec += matrix[i][j];
        i++;
        j--;
    }
    cout << first << " " << sec << endl;
}

void reveseeachrow(int matrix1[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "after reversing matrix become : " << endl;

    for (int i = 0; i < row; i++)
    {
        int st = 0;
        int en = col - 1;
        while (st < en)
        {
            swap(matrix1[i][st], matrix1[i][en]);
            st++;
            en--;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
}

void waveform(int arr1[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "after wave" << endl;
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    // int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printsum(matrix, 3, 3);
    // int matrix1[3][4] = {{2, 3, 4, 5}, {1, 2, 6, 8}, {4, 9, 3, 2}};
    // reveseeachrow(matrix1, 3, 4);
    // int n, m;
    // cin >> n >> m;

    // vector<vector<int>> matrix(n, vector<int>(m, 1));

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "rows " << matrix.size() << endl;
    // cout << "col " << matrix[0].size() << endl;
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    waveform(arr1, 3, 4);

    return 0;
}