#include <bits/stdc++.h>

using namespace std;

int main()
{

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "#";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //
    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     // cout << endl;
    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= 8 - 2 * i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= 8 - 2 * i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= 8 - 2 * i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 3; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= 8 - 2 * i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)

        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}