#include <bits/stdc++.h>

using namespace std;

// int nthterm(int n)
// {
//     int nth = 3 * n + 7;
//     return nth;
// }

// int cntof1(int n)
// {
//     int cnt = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;

//         if (bit == 1)
//         {
//             cnt++;
//         }
//         n = n >> 1;
//     }
//     return cnt;
// }

int update(int a)
{

    int ans = a * a;
    return ans;
}

int main()
{

    // int num = 2;
    // switch (num)
    // {
    // case 1:
    //     cout << "first" << endl;
    //     break;
    // case 2:
    //     cout << "second" << endl;
    //     break;
    // default:
    //     cout << "default" << endl; // match as num this for also char
    // }

    // char ch = '1';
    // int num = 1;
    // cout << endl;
    // switch (ch)
    // {
    // case 1:
    //     cout << "first" << endl;
    //     break;
    // case '1':
    //     switch (num)
    //     {
    //     case 1:
    //         cout << "first" << endl;
    //         break;
    //     }
    //     break;
    // }

    // int num = 1;
    // switch (num)
    // {
    // case 1:
    //     cout << "first" << endl;
    //     break;
    // case 2:
    //     continue;
    // case 3:
    //     cout << "third" << endl;
    // }

    // int amount;
    // cout << "Enter the amount: ";
    // cin >> amount;

    // int hundred = 0, fifty = 0, twenty = 0, one = 0;
    // int choice = 1; // Variable to keep track of the current denomination

    // while (amount > 0)
    // {
    //     switch (choice)
    //     {
    //     case 1: // 100 rupee notes
    //         hundred = amount / 100;
    //         amount = amount % 100;
    //         choice++; // Move to next denomination
    //         break;

    //     case 2: // 50 rupee notes
    //         fifty = amount / 50;
    //         amount = amount % 50;
    //         choice++; // Move to next denomination
    //         break;

    //     case 3: // 20 rupee notes
    //         twenty = amount / 20;
    //         amount = amount % 20;
    //         choice++; // Move to next denomination
    //         break;

    //     case 4: // 1 rupee notes
    //         one = amount / 1;
    //         amount = amount % 1;
    //         choice++; // Exit after processing
    //         break;

    //     default:
    //         break;
    //     }
    // }

    // // Output the result
    // cout << "Number of 100 rupee notes: " << hundred << endl;
    // cout << "Number of 50 rupee notes: " << fifty << endl;
    // cout << "Number of 20 rupee notes: " << twenty << endl;
    // cout << "Number of 1 rupee notes: " << one << endl;

    // int n;
    // cin>>n;
    // int a, b;
    // cin >> a >> b;

    // // cout << nthterm(n);
    // int x = cntof1(a);
    // int y = cntof1(b);
    // cout << x + y;

    int a = 14;
    a = update(a);
    cout << a;

    return 0;
}
