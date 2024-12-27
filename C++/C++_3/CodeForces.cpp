#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string create = "";
    for (char c : s)
    {
        char trasferchar = 'z' - (c - 'a');
#include <bits/stdc++.h>

        using namespace std;
        create += trasferchar;
    }
    cout << create << endl;

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int cnt1 = 1;
//         bool allEqual = true;
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] != arr[i - 1])
//             {
//                 allEqual = false;
//                 break;
//             }
//         }

//         if (allEqual)
//         {
//             cout << "2" << endl;
//         }
//         else
//         {
//             int cnt = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (arr[i] == i + 1)
//                 {
//                     cnt++;
//                 }
//             }
//             cout << cnt << endl;
//         }
//     }

//     return 0;
// }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int Operations(int x, int y)
// {
//     int steps = 0;

//     while (x > y)
//     {
//         if (x % 3 == 0)
//         {
//             x /= 3;
//         }
//         else if (x % 2 == 0)
//         {
//             x /= 2;
//         }
//         else
//         {
//             x -= 1;
//         }
//         steps++;
//     }

//     return steps + (y - x);
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int x, y;
//         cin >> x >> y;
//         cout << Operations(x, y) - 1 << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t; // Number of test cases
//     while (t--)
//     {
//         int n;
//         cin >> n; // Number of assignments
//         vector<int> days(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> days[i];
//         }

//         set<int> uniqueDays; // To store distinct adjusted submission days
//         for (int day : days)
//         {
//             if (uniqueDays.count(day) == 0)
//             {
//                 uniqueDays.insert(day);
//             }
//             else if (uniqueDays.count(day + 1) == 0)
//             {
//                 uniqueDays.insert(day + 1);
//             }
//         }

//         // Output the maximum sequence length
//         cout << uniqueDays.size() << '\n';
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <numeric>
// using namespace std;

// int gcd(int a, int b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> slimes(n);

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> slimes[i];
//     }

//     int overall_gcd = slimes[0];
//     for (int i = 1; i < n; ++i)
//     {
//         overall_gcd = gcd(overall_gcd, slimes[i]);
//     }

//     int move_count = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         if (slimes[i] % overall_gcd != 0)
//         {
//             ++move_count;
//         }
//     }

//     cout << move_count + 1 << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> days(n);
        for (int i = 0; i < n; i++)
        {
            cin >> days[i];
        }

        // Map to track the count of submissions for each day
        unordered_map<int, int> submission_count;
        for (int i = 0; i < n; i++)
        {
            submission_count[days[i]]++;
        }

        int max_length = 0;

        // Iterate over all days and check possible consecutive sequences
        for (auto &entry : submission_count)
        {
            int current_day = entry.first;
            int current_length = entry.second;

            // Count submissions for current day, previous day and next day
            if (submission_count.find(current_day - 1) != submission_count.end())
            {
                current_length += submission_count[current_day - 1];
            }
            if (submission_count.find(current_day + 1) != submission_count.end())
            {
                current_length += submission_count[current_day + 1];
            }

            // Update the maximum length found
            max_length = max(max_length, current_length);
        }

        cout << max_length << endl;
    }

    return 0;
}
