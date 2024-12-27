// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int x;
//     cin >> x;
//     int resto;
//     cin >> resto;
//     cout << "x^(" << resto + 1 << ") / (" << resto + 1 << "): " << pow(x, resto + 1) / (resto + 1) << endl;

//     int a, b;
//     cin >> a >> b;
//     cout << "integrasion will be ::" << (pow(b, resto + 1) - pow(a, resto + 1)) / (resto + 1) << endl;

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int A;
//         cin >> A;
//         int B = 2 * A;
//         int arr[A];
//         for (int i = 0; i < B; i++)
//         {
//             cin >> arr[i];
//         }
//         bool found = false;
//         for (int i = 0; i < B; i++)
//         {
//             for (int j = arr[i]; j > 0; j--)
//             {
//                 for (int k = 0; k < 10; k++)
//                 {
//                     if (j - k == arr[i] || j + k == arr[i])
//                     {
//                         cout << j << endl;
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (found)
//         {
//             cout << "yes";
//         }
//         else
//         {
//             cout << "no";
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int N;
        cin >> N;

        int B[2 * N]; // Sequence B of size 2 * N

        for (int i = 0; i < 2 * N; i++)
        {
            cin >> B[i];
        }

        // Sort array B for easier matching of pairs
        sort(B, B + 2 * N);

        bool used[2 * N] = {0}; // Array to track used elements
        bool possible = true;   // To track if solution is possible

        for (int i = 0; i < 2 * N; i++)
        {
            if (used[i])
                continue; // If already used, skip

            bool found = false;
            for (int j = i + 1; j < 2 * N; j++)
            {
                if (!used[j] && (B[j] - B[i]) % 2 == 0)
                {
                    // We found a valid pair B[i] and B[j] where:
                    // A[i] = (B[j] + B[i]) / 2
                    // k = (B[j] - B[i]) / 2

                    // Mark these elements as used
                    used[i] = 1;
                    used[j] = 1;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
