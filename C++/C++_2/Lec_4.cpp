#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int count = 1;
    //     while (j <= n)
    //     {
    //         cout << count++ << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int i = 1;

    // int count = 1;
    // for (int i = 1; i < n; i++)
    // {

    //     int j = 1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int row = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;

    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (i - j + 1) << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // char start = 'A' - 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << start << " ";
    //         start++;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // char start = 'A' - 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << start << " ";
    //         start++;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // char st = 'A' - 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = st + i + j - 2;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     char start = 'A' + n - i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << start << " ";
    //         start++;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     char st = 'A' + i - 1;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << st << " ";
    //         st++;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "* " << " ";
    //     }
    //     cout << endl;
    // }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
    }
    for (int i = 1; i <= n - i + 1; i++)
    {
        cout << i << " ";
    }

    return 0;
}