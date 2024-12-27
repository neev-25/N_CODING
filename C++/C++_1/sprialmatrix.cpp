#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int row_start = 0, row_end = n - 1, colum_start = 0, colum_end = m - 1;
    while (row_start <= row_end && colum_start <= colum_end)
    {
        // for row start
        for (int col = colum_start; col <= colum_end; col++)
            cout << a[row_start][col] << " ";

        row_start++;

        // for colum end
        for (int row = row_start; row <= row_end; row++)
            cout << a[row][colum_end] << " ";

        colum_end--;
        // for row_end
        for (int col = colum_end; col >= colum_start; col--)
            cout << a[row_end][col] << " ";

        row_end--;

        // for colum start
        for (int row = row_end; row >= row_start; row--)
            cout << a[row][colum_start] << " ";

        colum_start++;
    }

    return 0;
}
// first look for loop syntex
// then look a[.][.]
// thrn [.]++