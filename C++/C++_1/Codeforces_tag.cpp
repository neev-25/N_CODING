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
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int total_check = 1;
//         int cnt = 0;
//         int maxi, mini;
//         for (int i = 0; i < n; i++)
//         {
//             maxi = arr[i];
//             mini = arr[i];

//             for (int j = i; j < n; j++)
//             {
//                 maxi = max(maxi, arr[j]);
//                 mini = min(mini, arr[j]);
//                 if (maxi % mini == 0)
//                 {
//                     cnt++;
//                 }
//             }
//         }
//         cout << cnt;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> mid_sem_scores(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> mid_sem_scores[i];
//     }

//     vector<int> results(n);
//     for (int i = 0; i < n; i++)
//     {

//         double required_score = (90 * 100 - mid_sem_scores[i] * 30 - 25 * 100) / 45.0;

//         if (required_score > 100)
//         {
//             results[i] = -1;
//         }
//         else
//         {
//             results[i] = max(0, (int)ceil(required_score));
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << results[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int si, sh;
//     cin >> si >> sh;
//     int b;
//     cin >> b;

//     for (int j = 0; j < b; j++)
//     {
//         vector<int> arr(2);
//         for (int i = 0; i < 2; i++)
//         {
//             cin >> arr[i];
//         }
//     }
//     for (int i = 0; i < b; i++)
//     {
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     int arr[t];
//     for (int i = 0; i < t; i++)
//     {
//         cin >> arr[i];
//     }
//     int num = 0;
//     for (int i = 0; i < t; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (j & arr[i] > 0 && j ^ arr[i] > 0)
//             {
//                 cout << num << endl;
//             }
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         int b = 1;
//         while (((a & b) == 0) || ((a ^ b) == 0))
//         {
//             b++;
//         }

//         cout << b << endl;
//     }
//     return 0;
// }

// #include <stdio.h>
// int exist(int T, int B, int x, int y)
// {

//     if (x + y >= B && x + y <= 2 * T - B &&x - y >= -B && x - y <= B)
//     {
//         return 1;
//     }
//     return 0;
// }

// int main()
// {
//     int T, B, M;
//     scanf("%d %d", &T, &B);
//     scanf("%d", &M);

//     for (int i = 0; i < M; i++)
//     {
//         int x, y;
//         scanf("%d %d", &x, &y);
//         if (exist(T, B, x, y))
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     return 0;
// }