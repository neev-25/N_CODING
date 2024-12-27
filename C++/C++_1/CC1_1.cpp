// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int T; // number of test cases
//     cin >> T;

//     while (T--)
//     {
//         int hr;
//         cin >> hr;
//         int arr[2];

//         for (int i = 0; i < 2; i++)
//         {
//             cin >> arr[i];
//         }
//         int val1 = hr * arr[0];
//         int val2 = (hr / 2) * arr[1];
//         int val3 = (hr % 2) * arr[0] + (hr / 2) * arr[1];
//         int a = max(val1, max(val2, val3));
//         cout << a << endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int T; // number of test cases
//     cin >> T;

//     while (T--)
//     {
//         int hr;
//         cin >> hr;
//         int arr[2];

//         for (int i = 0; i < 2; i++)
//         {
//             cin >> arr[i];
//         }

//         // Calculate the maximum value based on different approaches
//         int val1 = hr * arr[0];       // Total value if we use arr[0] every hour
//         int val2 = (hr / 2) * arr[1]; // If using arr[1] for half the hours

//         // For val3, calculate using arr[0] for the first hour, then arr[1] for alternate hours
//         int val3 = arr[0] + ((hr - 1) / 2) * arr[1];

//         // Take the maximum of all calculated values
//         int a = max(val1, max(val2, val3));
//         cout << a << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int testcase;
//     cin >> testcase;

//     while (testcase--)
//     {
//         int damage;
//         cin >> damage;
//         int heal;
//         cin >> heal;
//         int cnt = 0;
//         int t = 0;
//         for (int i = 0; i < 5 && heal > 0 && damage < heal; i++)
//         {
//             cnt += 1;
//             heal = heal - damage / 2;
//             if (heal <= 0)
//             {
//                 break;
//             }
//         }

//         while (heal > 0)
//         {

//             heal = heal - damage;
//             cnt += 1;
//         }
//         cout << cnt << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int perdamage, Health;
//         cin >> perdamage >> Health;

//         int cnt = 0;
//         int damage = 0;

//         for (int i = 0; i < 5 && Health > 0; i++)
//         {
//             damage = perdamage / 2;
//             Health -= damage;
//             cnt++;

//             if (Health <= 0)
//             {
//                 break;
//             }
//         }

//         while (Health > 0)
//         {
//             Health -= perdamage;
//             cnt++;
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // remove duplicates and print right most dduplicate
//     int size;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         swap(arr[i], arr[size - i - 1]);
//     }
//     int count = 1;
//     for (int i = 1; i < size; i++){
//         if (arr[i] == arr[i - 1]) {
//             count++;

//         }

//     }

//}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     int rightmost[1020];
//     for (int i = 0; i < 1020; i++)
//     {
//         rightmost[i] = -1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         rightmost[a[i]] = i;
//     }
//     int original[n];
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (rightmost[a[i]] == i)
//         {
//             original[cnt] = a[i];
//             cnt++;
//         }
//     }
//     cout << cnt << endl;
//     for (int i = 0; i < cnt; i++)
//     {
//         cout << original[i] << " ";
//     }
//     return 0;
//}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     //  even largest subarray size
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int cnt = 0;
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             // if (a[i] % 2 == 0 && a[i - 1] % 2 == 0)
//             // {
//             //     cnt++;
//             // }
//             // sum = a[i - 1];
//             if (sum % 2 == 0)
//             {
//                 sum += a[i];
//                 cnt++;
//             }
//             else if (sum % 2 != 0 && a[i + 1] % 2 != 0)
//             {
//                 sum = a[i] + a[i + 1];
//                 cnt++;
//             }
//             else if (sum % 2 == 0 && a[i + 1] % 2 == 0)
//             {
//                 sum += a[i + 1];
//                 cnt++;
//             }
//         }
//         cout << cnt << endl;
//     }
// }
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
//         vector<int> a(10000);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int size = 0, currsum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             currsum += a[i];
//             if (currsum % 2 == 0)
//             {
//                 size = i + 1;
//             }
//         }
//         cout << size << endl;
//     }
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
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int totalSum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             totalSum += a[i];
//         }

//         if (totalSum % 2 == 0)
//         {
//             cout << n << endl;
//             continue;
//         }

//         int leftOdd = -1, rightOdd = -1;

//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] % 2 != 0)
//             {
//                 leftOdd = i;
//                 break;
//             }
//         }

//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (a[i] % 2 != 0)
//             {
//                 rightOdd = i;
//                 break;
//             }
//         }

//         int maxSize = max(n - leftOdd - 1, rightOdd);
//         cout << maxSize << endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int t;
//     // cin>>t;

//     int arr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> arr[i];
//     }

//     int mini = -1;

//     if (arr[0] > arr[1])
//     {
//         mini = min(arr[0], arr[1]);
//         arr[0] = arr[0] - mini;
//         arr[1] = arr[1] - mini;
//         if (arr[0] > arr[1])
//         {
//             cout << "YES";
//         }
//     }
//     else if (arr[1] > arr[0])
//     {
//         cout << "NO";
//     }
//     else if (arr[1] > arr[2])
//     {
//         mini = min(arr[0], arr[1]);
//         arr[1] = arr[1] - mini;
//         arr[2] = arr[2] - mini;
//         if (arr[1] > arr[2])
//         {
//             cout << "YES";
//         }
//     }
//     else if (arr[2] > arr[1])
//     {
//         cout << "NO";
//     }
//     else if (arr[2] > arr[0])
//     {
//         mini = min(arr[1], arr[2]);
//         arr[2] = arr[2] - mini;
//         arr[0] = arr[0] - mini;
//         if (arr[2] > arr[0])
//         {
//             cout << "YES";
//         }
//     }
//     else if (arr[2] > arr[0])
//     {
//         cout << "NO";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int arr[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> arr[i];
//         }
//         int mini = -1;
//         mini = min(arr[0], arr[1]);
//         arr[0] = arr[0] - mini;
//         arr[1] = arr[1] - mini;

//         mini = min(arr[1], arr[2]);
//         arr[1] = arr[1] - mini;
//         arr[2] = arr[2] - mini;

//         mini = min(arr[0], arr[2]);
//         arr[0] = arr[0] - mini;
//         arr[2] = arr[2] - mini;
//         if (arr[0] > 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (--t)
//     {
//         int arr[3];
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> arr[i];
//         }
//         //         int mini;
//         //         int mini1;
//         //         int mini2;
//         //         mini = min(arr[0], arr[1]);
//         //         mini1 = min(arr[1], arr[2]);
//         //         mini2 = min(arr[0], arr[2]);
//         //         int minsum = mini + mini2 + mini1;

//         //         if (arr[0] - minsum > 0)
//         //         {
//         //             cout << "YES" << endl;
//         //         }
//         //         cout << "NO" << endl;

//         if ((arr[0] - arr[1] - arr[2]) < 0)
//         {
//             cout << "NO" << endl;
//         }
//         cout << "YES" << endl;
//     }
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int A, B, C;
//         cin >> A >> B >> C;
//         int x = B - min(B, C);
//         int y = C - min(B, C);
//         if (A - x > 0 && A - y > 0)
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int ans = INT_MAX;
//     int m = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     // int ans;
//     int cnt = 2;
//     int cot = 0;
//     while (cnt--)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int m = max(a[i], m);
//             for (int j = 0; j < n; j++)
//             {
//                 if (cot < 2 && a[j] - a[i] != 0)
//                 {
//                     ans = min(ans, m - a[j]);
//                     cot++;
//                 }
//             }
//         }
//         cout << ans << " ";
//     }
// }

//  #include <stdio.h>
// int main()
// {
//     int i = 0;
//     for (i = 0; i < 20; i++)
//     {
//         switch (i)
//         {
//         case 0:
//             i += 5;
//         case 1:
//             i += 2;
//         case 5:
//             i += 5;
//         default:
//             i += 4;
//             break;
//         }
//         printf("%d\n", i);
//     }
// }
// // 11
// //

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int maxi = INT_MIN;
//     int mini = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         // maxi=max(arr[i],maxi);
//     }
//     int cnt = 0;
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt++ < 2 && maxi - a[i] != 0)
//         {
//             maxi = max(a[i], maxi);
//             mini = min(maxi - a[i], mini);
//         }
//         cout << mini << endl;
//     }
//     // cout << mini << endl;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <bits/stdc++.h>

// using namespace std;

// int minrange(vector<int> &a)
// {
//     sort(a.begin(), a.end());
//     int n = a.size();

//     if (n <= 3)
//     {
//         return 0;
//     }
//     else
//     {

//         return min({a[n - 1] - a[2], a[n - 2] - a[1], a[n - 3] - a[0]});
//     }
// }

// int main()
// {

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }

//         cout << minrange(a) << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     // int n;
//     // cin >> n;
//     // while (n--)
//     // {
//     int a[2];
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> a[i];
//     }
//     int pre = a[1];
//     int pen = a[0];
//     int k = 0;
//     while ((pre + (20 * k) + pen) <= 1000)
//     {
//         k++;
//         pen++;
//     }
//     cout << k;

//     // }
//}
// #include <iostream>
// using namespace std;

// int main()
// {
//     // Input the two values
//     int a[2];
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> a[i];
//     }

//     int pre = a[1];
//     int pen = a[0];
//     int k = 1;

//     // Keep incrementing k and pen while the condition is satisfied
//     while ((pre + pen + (20 * k) + k + 1) <= 1000)
//     {
//         k++;
//         pen++;
//     }

//     // Output the final value of k
//     cout << k << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void max_wrong_submissions(int T, int cases[][2])
// {
//     for (int i = 0; i < T; i++)
//     {
//         int M = cases[i][0];
//         int P = cases[i][1];

//         int maxofpenalty = (1000 - (P + M + 1)) / 21;

//         int maxoftime = 299 - M;

//         int result = min(maxofpenalty, maxoftime);

//         cout << result << endl;
//     }
// }

// int main()
// {
//     int T;
//     cin >> T;
//     int cases[T][2];

//     for (int i = 0; i < T; i++)
//     {
//         cin >> cases[i][0] >> cases[i][1];
//     }

//     max_wrong_submissions(T, cases);

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// void max_wrong_submissions(int T, vector<pair<int, int>> &cases)
// {
//     for (int i = 0; i < T; i++)
//     {
//         int M = cases[i].first;
//         int P = cases[i].second;

//         int maxofpenalty = (1000 - (P + M + 1)) / 21;
//         int maxoftime = 299 - M;

//         int result = min(maxofpenalty, maxoftime);

//         cout << result << endl;
//     }
// }

// int main()
// {
//     int T;
//     cin >> T;

//     vector<pair<int, int>> cases(T);

//     for (int i = 0; i < T; i++)
//     {
//         cin >> cases[i].first >> cases[i].second;
//     }

//     max_wrong_submissions(T, cases);

//     return 0;
// }
// #include <math.h>
// #include <stdio.h>
// #include <time.h>

// int main()
// {
//     double a;
//     static int j;
//     clock_t time_req;

//     time_req = clock();
//     for (int i = 0; i < 200000; i++)
//     {
//         a = log(i * i * i * i);
//     }
//     time_req = clock() - time_req;
//     printf("Processor time taken for automatics storage: %f "
//            "seconds\n",
//            (float)time_req / CLOCKS_PER_SEC);

//     time_req = clock();
//     for (j = 0; j < 200000; j++)
//     {
//         a = log(j * j * j * j);
//     }
//     time_req = clock() - time_req;
//     printf("Processor time taken in static storage: %f "
//            "seconds\n",
//            (float)time_req / CLOCKS_PER_SEC);

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
//         int a, b;
//         cin >> a >> b;
//         if (a > b)
//         {
//             cout << a + b << endl;
//         }
//         else if (a <= b)
//         {
//             cout << "-1" << endl;
//         }
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N, M;
//         cin >> N >> M;
//         if (N >= M + 1)
//         {
//             cout << 2 * M + 1 << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int even(int a)
// {
//     if (a % 2 == 0)
//     {
//         return a + 1;
//     }
//     else
//     {
//         return a;
//     }
// }
// int main()
// {
//     // int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     int a;
//     cin >> a;
//     if (a % 2 == 0 && even(a / 2))
//     {
//         cout << a - 2 << endl;
//     }
//     else if (a % 2 == 0 && !even(a / 2))
//     {
//         cout << a - 1 << endl;
//     }
//     //}
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int X;
//         cin >> X;

//         cout << X - 2 << endl;
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int min_moves(char s, char k)
// {
//     int diff = abs(s - k);
//     return min(diff, 10 - diff);
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N, M;
//         cin >> N >> M;

//         string S, K;
//         cin >> S >> K;

//         int minmoves = 1e9;

//         for (int i = 0; i <= N - M; i++)
//         {
//             int moves = 0;
//             for (int j = 0; j < M; j++)
//             {
//                 moves += min_moves(S[i + j], K[j]);
//             }
//             minmoves = min(minmoves, moves);
//         }
//         cout << minmoves << endl;
//     }

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
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         bool found = 0;
//         int j = 0;
//         int k = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (s[i] == '1' && s[i + 1] == '1')
//             {
//                 found = 1;
//                 break;
//                 j++;
//             }
//             else if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
//             {
//                 found = 1;
//                 break;
//                 j++;
//             }
//             k++;
//         }
//         if (found && k <= 2 * j)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int L;
//         cin >> L;
//         string S;
//         cin >> S;

//         int heaven = 0;
//         bool found = 0;

//         for (int i = 0; i < L; i++)
//         {
//             if (S[i] == '1')
//             {
//                 heaven++;
//             }

//             if (heaven * 2 >= (i + 1))
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int pow(int a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return a * pow(a, b - 1);
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long D;
//         long long I;
//         cin >> D;
//         cin >> I;
//         long long infect;
//         if (D > I)
//         {

//             if (I <= 10)
//             {
//                 infect = pow(2, I);
//             }
//             else
//             {
//                 infect = 1024 * pow(3, I - 10);
//             }
//         }
//         infect = min(infect, D);
//         cout << infect << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int slice;
//         cin >> slice;

//         int ans;
//         for (int i = 0; i < INT_MAX; i++)
//         {

//             int lowerPower = (int)pow(2, i);
//             int upperPower = (int)pow(2, i + 1);
//             if (lowerPower <= slice && slice < upperPower)
//             {
//                 ans = min(abs(slice * 2 - lowerPower), abs(slice * 2 - upperPower));
//                 cout << ans << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     // int x = 3, y;
//     // y = --x * x-- * ++x * --x * x-- * ++x * x++ * x++;
//     // cout << x << " " << y << endl;
//     // return 0;
//     float x;
//     x = 5.0 / 2;
//     cout << x;
// }
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
//         int sb = 2 * n;
//         vector<int> arr(sb);
//         for (int i = 0; i < sb; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr.begin(), arr.end());

//         bool found = true;
//         for (int i = 0; i < sb - 1; i += 2)
//         {
//             if ((arr[i + 1] + arr[i]) % 2 != 0)
//             {
//                 found = false;
//                 break;
//             }
//         }

//         if (found)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// bool exist(vector<int> &B)
// {

//     for (int i = 0; i < B.size(); i += 2)
//     {
//         if ((B[i + 1] + B[i]) % 2 != 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N;
//         cin >> N;
//         vector<int> B(2 * N);

//         for (int i = 0; i < 2 * N; ++i)
//         {
//             cin >> B[i];
//         }

//         sort(B.begin(), B.end());

//         if (exist(B))
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

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
//         int n;
//         cin >> n;
//         string ans = "";
//         string etc = "wao";
//         for (int i = 0; i < n; i++)
//         {
//             ans += etc[i % 3];
//         }
//         cout << ans << endl;
//     }
// }
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
//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int oddcnt = 0;
//         int evencnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] % 2 == 0)
//             {
//                 evencnt++;
//             }
//             else
//             {
//                 oddcnt++;
//             }
//         }
//         int perforasoddcnt = (n + 1) / 2;
//         int performasevencnt = n / 2;
//         int ans = min(oddcnt, performasevencnt) + min(evencnt, perforasoddcnt);
//         cout << ans << endl;
//     }
// }

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
//         vector<int> v;
//         for (int i = 1; i <= n; i++)
//         {
//             v.push_back(i);
//         }
//         sort(v.begin(), v.end());
//         vector<int> ans;

//         do
//         {
//             int sum = 0;
//             // for (int j = 0; j < n; j++)
//             // {
//             int j = 0;
//             while (j < n)
//             {
//                 sum += max(v[j], v[(j + 1) % n]);
//                 //}
//                 j++;
//             }

//             ans.push_back(sum);

//         } while (next_permutation(v.begin(), v.end()));
//         sort(ans.begin(), ans.end());
//         cout << ans[0] << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long T;
//     cin >> T;

//     while (T--)
//     {
//         long long N;
//         cin >> N;

//         long long ans = N + N * (N + 1) / 2 - 1;

//         cout
//             << ans << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // vector<int> ans;
//     // int sum = arr[0];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     ans.push_back(sum);
//     //     sum += arr[i + 1];
//     // }
//     // for (int i = 0; i < ans.size(); i++)
//     // {
//     //     cout << ans[i] << " ";
//     // }

//     int prefix[n];
//     prefix[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {

//         prefix[i] = prefix[i - 1] + arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << prefix[i] << " ";
//     }
// }
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
//         int mini1 = INT_MAX;
//         int mini2 = INT_MAX;
//         int diff;
//         int diff1;
//         for (int i = 0; i < n - 1; i++)
//         {
//             diff = arr[i + 1] - arr[i];
//             diff1 = arr[n - 1 - i] - arr[n - 2 - i];

//             if (diff < 0)
//             {
//                 diff = -diff;
//                 diff1 = -diff1;
//             }
//             if (diff < mini1)
//             {
//                 mini1 = diff;
//                 mini2 = diff1;
//             }
//         }
//         cout << min(mini1, mini2) << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N;
//         cin >> N;
//         vector<int> A(N);
//         for (int i = 0; i < N; ++i)
//         {
//             cin >> A[i];
//         }
//         int minScore = INT_MAX;
//         for (int i = 0; i < N; ++i)
//         {
//             int maxdiff = 0;
//             if (i > 0)
//             {
//                 maxdiff = max(maxdiff, abs(A[i] - A[i - 1]));
//             }
//             if (i < N - 1)
//             {
//                 maxdiff = max(maxdiff, abs(A[i] - A[i + 1]));
//             }
//             minScore = min(minScore, maxdiff);
//         }
//         cout << minScore << endl;
//     }
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
//         int n;
//         cin >> n;
//         bool found = true;
//         for (int i = 1; i <= n; i++)
//         {
//             if (n == pow(2, i))
//             {
//                 found = false;
//             }
//         }
//         if (found)
//         {
//             cout << "alice" << endl;
//         }
//         else
//         {
//             cout << "bob" << endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int num)
// {
//     if (num < 2)
//         return false;
//     for (int i = 2; i * i <= num; i++)
//     {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// int smallestOddPrimeFactor(int n)
// {
//     for (int i = 3; i <= n; i += 2)
//     {
//         if (n % i == 0 && isPrime(i))
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         long long N;
//         cin >> N;

//         if (N == 1 || N == 2)
//         {
//             cout << "Bob" << endl;
//             continue;
//         }

//         int Factor = smallestOddPrimeFactor(N);

//         if (Factor == -1)
//         {
//             cout << "Bob" << endl;
//         }
//         else
//         {
//             cout << "Alice" << endl;
//         }
//     }
//     return 0;
//
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     long long N, M;
//     cin >> N >> M;
//     vector<long long> freq(3 * N + 1, 0);
//     for (long long a = 1; a <= N; a++)
//     {
//         for (long long b = N + 1; b <= 2 * N; b++)
//         {
//             long long sum = a + b;
//             freq[sum]++;
//         }
//     }
//     while (M--)
//     {
//         long long q;
//         cin >> q;
//         if (q >= N + 2 && q <= 3 * N)
//         {
//             cout << freq[q] << endl;
//         }
//         else
//         {
//             cout << 0 << endl;
//         }
//     }
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
//         int n;
//         cin >> n;
//         vector<int> arr;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int sum = 0;
//         int temp;
//         while (next_permutation(arr.begin(), arr.end()))
//         {
//             temp = next_permutation(arr.begin(), arr.end());
//             for (int i = 0; i < n; i++)
//             {
//                 sum += abs(arr[i + 1] - arr[i]);
//             }
//         }
//         if (sum % 2 == 0)
//         {
//             cout << temp << endl;
//         }
//         else
//         {
//             cout << 0 << endl;
//         }
//     }
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
//         int n;
//         cin >> n;
//         vector<int> arr(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         bool found = false; // To check if we found at least one permutation
//         do
//         {
//             int sum = 0;
//             for (int i = 0; i < n - 1; i++)
//             {
//                 sum += abs(arr[i + 1] - arr[i]);
//             }

//             if (sum % 2 == 0)
//             { // Check if the sum is even
//                 found = true;
//                 for (int i = 0; i < n; i++)
//                 {
//                     cout << arr[i] << " ";
//                 }
//             }

//         } while (next_permutation(arr.begin(), arr.end())); // Generate all permutations

//         if (!found)
//         {
//             cout << "No such permutation found." << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> nums = {1, 1, 0, 1, 1, 1};
//     int maxi = INT_MIN;
//     int cnt = 0;
//     for (int j = 0; j < nums.size(); j++)
//     {
//         if (nums[j] == 1)
//         {
//             cnt++;
//             maxi = max(maxi, cnt);
//         }
//         else if (nums[j] == 0)
//         {
//             cnt = 0;
//         }
//     }
//     cout << maxi;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 3, 2, 2, 5, 2, 3, 7};
//     int st = 0;
//     int en = arr.size() - 1;
//     int cnt = 0;
//     while (st < en)
//     {
//         if (arr[st] == arr[en])
//         {
//             cnt++;
//         }
//         else if (arr[st] != arr[en])
//         {
//             if (arr[st] == arr[st - 1] || arr[en] == arr[en + 1])
//             {
//                 cnt++;
//             }
//         }
//         st++;
//         en--;
//     }
//     cout << cnt;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> arr = {{1, 1, 0}, {1, 0, 1}, {0, 0, 1}};
//     int n = arr.size();
//     int m = arr[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 arr[i][j] = 0;
//             }
//             else if (arr[i][j] == 0)
//             {
//                 arr[i][j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to check if the matrix is a Toeplitz matrix
// bool isToeplitzMatrix(const vector<vector<int>> &matrix)
// {
//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     for (int i = 0; i < rows - 1; i++)
//     {
//         for (int j = 0; j < cols - 1; j++)
//         {
//             // Check the condition for Toeplitz matrix
//             if (matrix[i][j] != matrix[i + 1][j + 1])
//             {
//                 return false; // If any condition fails, it's not a Toeplitz matrix
//             }
//         }
//     }
//     return true; // If all conditions are satisfied, it's a Toeplitz matrix
// }

// int main()
// {
//     // Example matrix (you can change this to test other matrices)
//     vector<vector<int>> matrix = {
//         {1, 2, 3, 4},
//         {5, 1, 2, 3},
//         {9, 5, 1, 2}};

//     if (isToeplitzMatrix(matrix))
//     {
//         cout << "The matrix is a Toeplitz matrix." << endl;
//     }
//     else
//     {
//         cout << "The matrix is not a Toeplitz matrix." << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> mat = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
//     int n = mat.size();
//     int m = mat[0].size();
//     int sum = 0;
//     int marked[n][m] = {0};

//     if (n % 2 == 1)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             sum += mat[i][i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i != n - i - 1)
//             {

//                 sum += mat[i][i];
//             }
//         }
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             sum += mat[i][i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             sum += mat[i][n - i - 1];
//         }
//     }

//     cout << sum;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[4][4] = {{4, 3, 2, 1}, {5, 4, 3, 2}, {6, 5, 4, 3}, {7, 6, 5, 4}};
//     int i = 0;
//     int j = 3;
//     bool found = true;
//     while (i < 3 && j >= 0)
//     {
//         if (arr[i][--j] ^ arr[++i][j] == 0)
//         {
//             found = false;
//             break;
//         }
//         }

//     i = 3;
//     j = 0;
//     while (j < 3 && i >= 0)
//     {
//         if (arr[--i][j] ^ arr[i][++j] != 0)
//         {
//             found = false;
//             break;
//         }
//     }
//     if (found)
//     {
//         cout << "yes";
//     }
//     else
//     {
//         cout << "no";
//     }
// }
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
//         string s;
//         cin >> s;
//         bool found = false;
//         for (int i = 0; i < n; i++)
//         {
//             int angle = 0;
//             for (int j = i; j < n; j++)
//             {
//                 if (s[j] == 'L')
//                 {
//                     angle = (angle + 3) % 4;
//                 }
//                 else if (s[j] == 'R')
//                 {
//                     angle = (angle + 1) % 4;
//                 }
//                 if (angle == 2)
//                 {
//                     found = true;
//                 }
//             }
//         }
//         if (found)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }
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
//         string s;
//         cin >> s;
//         bool found = false;
//         for (int i = 0; i <= n; i++)
//         {
//             if (s[i] == 'R' && s[i + 1] == 'R' || s[i] == 'L' && s[i + 1] == 'L')
//             {
//                 found = true;
//             }
//         }
//         if (found)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int time = 0;
//     if (n % 2 == 0)
//     {
//         time = n / 2;
//     }
//     else if (n % 2 == 1)
//     {
//         time = (n + 1) / 2;
//     }
//     int xorsum = 0;
//     int cnt = 0;
//     for (int i = 0; i < time; i++)
//     {
//         xorsum = xorsum ^ time;
//         cnt++;
//     }
//     if (cnt == n - 1)
//     {
//         cout << xorsum << endl;
//     }
//     for (int i = 1; i <= time - 1; i++)
//     {
//         xorsum = xorsum ^ i;
//         cnt++;
//     }
//     if (cnt == n - 1)
//     {
//         cout << xorsum << endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// void perm(int n)
// {

//     int a[n];
//     if (n == 2)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     if (n % 2 == 1)
//     {
//         int x = n;
//         for (int i = 0; i < n; i++)
//         {
//             cout << x << " ";
//             x--;
//         }
//         cout << endl;
//         return;
//     }
//     int x = 1;
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = x;
//         x++;
//     }
//     a[0] = 2;
//     a[1] = 3;
//     a[2] = 1;
//     for (long long i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         perm(n);
//     }
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int q;
//     cin >> q;
//     vector<int> a(q);
//     vector<int> set1;
//     vector<int> set2;
//     vector<int> ans;
//     vector<int> store(1000, 0);

//     for (int i = 0; i < q; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         set1.push_back(i);
//     }
//     for (int j = n + 1; j <= 2 * n; j++)
//     {
//         set2.push_back(j);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             ans.push_back(set1[i] + set2[j]);
//         }
//     }
//     // for (int i = 0; i < ans.size(); i++)
//     // {
//     //     cout << ans[i] << " ";
//     // }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         store[ans[i]]++;
//     }
//     for (int i = 0; i < 1000; i++)
//     {
//         cout << store[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int q;
//     cin >> q;
//     int nums[q];
//     for (int i = 0; i < q; i++)
//     {
//         cin >> nums[i];
//     }
//     for (int i = 0; i < q; i++)
//     {
//         if (nums[i] == n * 2 + 1)
//         {
//             cout << n << endl;
//         }
//         else if (nums[i] == n * 2 - 1 || nums[i] == n * n)
//         {
//             cout << n - 2 << endl;
//         }
//         else if (nums[i] == n * 2 || nums[i] == n * 2 + 2)
//         {
//             cout << n - 1 << endl;
//         }
//         else
//         {
//             cout << "0" << endl;
//         }
//     }

//     return 0;
// }
/*#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;
    unordered_map<long long, long long> frequency;
    for (long long a = 1; a <= N; a++)
    {
        for (long long b = N + 1; b <= 2 * N; b++)
        {
            frequency[a + b]++;
        }
    }
    for (long long i = 0; i < M; i++)
    {
        long long q;
        cin >> q;
        cout << frequency[q] << endl;
    }

    return 0;
}
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long N, M;
//     cin >> N >> M;
//     for (long long i = 0; i < M; i++)
//     {
//         long long q;
//         cin >> q;
//         if (q < 2 || q > 3 * N)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             long long minpos = max(1LL, q - (2 * N));
//             long long maxpos = min(N, q - (N + 1));

//             if (minpos > maxpos)
//             {
//                 cout << 0 << endl;
//             }
//             else
//             {
//                 cout << (maxpos - minpos + 1) << endl;
//             }
//         }
//     }

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// string createPalindrome(int a_count, int b_count)
// {
//     string s;
//     for (int i = 0; i < a_count / 2; ++i)
//         s += 'a';
//     for (int i = 0; i < b_count / 2; ++i)
//         s += 'b';
//     if (a_count % 2)
//         s += 'a';
//     if (b_count % 2)
//         s += 'b';
//     for (int i = 0; i < b_count / 2; ++i)
//         s += 'b';
//     for (int i = 0; i < a_count / 2; ++i)
//         s += 'a';
//     return s;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int X, Y;
//         cin >> X >> Y;

//         if (X % 2 == 1 && Y % 2 == 1)
//         {
//             cout << -1 << endl;
//             continue;
//         }

//         string S1 = createPalindrome(X, Y);
//         string S2;
//         if (X > 1 && Y > 1)
//         {
//             S2 = createPalindrome(X - 1, Y + 1);
//         }
//         else if (X > 0)
//         {
//             S2 = createPalindrome(X - 1, Y + 1);
//         }
//         else
//         {
//             S2 = createPalindrome(X + 1, Y - 1);
//         }

//         if (S1 == S2)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << S1 << endl;
//             cout << S2 << endl;
//         }
//     }
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
//         int n;
//         cin >> n;
//         long long arr[n];
//         for (long long i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         long long pre[n] = {0};
//         long long suf[n] = {0};
//         long long curr = 0;
//         for (long long i = 0; i < n; i++)
//         {
//             curr += arr[i];
//             pre[i] = curr;
//         }
//         curr = 0;
//         long long ans = 0;
//         for (long long i = n - 1; i >= 0; i--)
//         {
//             curr += arr[i];
//             suf[i] = curr;
//         }
//         for (long long i = 0; i < n; i++)
//         {
//             if (arr[i] == 0)
//             {
//                 if (pre[i] == suf[i])
//                 {
//                     ans += 2;
//                 }
//                 else if (abs(pre[i] - suf[i]) == 1)
//                 {
//                     ans += 1;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n = 5;
//     int m = 4;
//     char arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     string arr = "ageuw";
//     int cnt = 1;
//     cout << arr << endl;
//     for (int i = 0; i < 5 - cnt; i++)
//     {
//         if ((arr[i + 1]) < (arr[i]))
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//         cnt++;
//     }
//     cout << arr << endl;

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     string s = "neevmendpara";
//     // string given subtract=vmen
//     cout << s << endl;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'v')
//         {
//             s.erase(i, 4);
//         }
//     }
//     cout << s << endl;
//     return 0;
// }
// #include <stdio.h>

// // Custom function to check if a character is lowercase
// int is_lower(char c)
// {
//     return (c >= 'a' && c <= 'z'); // Returns non-zero (true) if c is lowercase
// }

// // Custom function to check if a character is uppercase
// int is_upper(char c)
// {
//     return (c >= 'A' && c <= 'Z'); // Returns non-zero (true) if c is uppercase
// }

// // Custom function to convert a character to uppercase
// char to_upper(char c)
// {
//     if (is_lower(c))
//     {
//         return c - ('a' - 'A'); // Converts lowercase to uppercase
//     }
//     return c; // Returns the character unchanged if it's not lowercase
// }

// // Custom function to convert a character to lowercase
// char to_lower(char c)
// {
//     if (is_upper(c))
//     {
//         return c + ('a' - 'A'); // Converts uppercase to lowercase
//     }
//     return c; // Returns the character unchanged if it's not uppercase
// }

// int main()
// {
//     char sentence[100];

//     // Prompt user to enter a sentence
//     printf("Enter a sentence: ");
//     fgets(sentence, sizeof(sentence), stdin); // Read input including spaces

//     // Traverse the sentence and change the case of each letter
//     for (int i = 0; sentence[i] != '\0'; i++)
//     {
//         if (is_lower(sentence[i]))
//         {
//             sentence[i] = to_upper(sentence[i]); // Convert lowercase to uppercase
//         }
//         else if (is_upper(sentence[i]))
//         {
//             sentence[i] = to_lower(sentence[i]); // Convert uppercase to lowercase
//         }
//     }

//     // Display the modified sentence
//     printf("Modified sentence: %s", sentence);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
float convert(float x)
{
    return pow(2.71828, -x * x);
}
int main()
{
    float lowerlimit;
    cin >> lowerlimit;
    float upperlimit;
    cin >> upperlimit;
    float dx = 0.0000001;
    float ans = 0;
    while (lowerlimit != upperlimit)
    {
        ans = ans + convert(lowerlimit) * dx;
        lowerlimit = lowerlimit + dx;
    }
    cout << ans << endl;
    return 0;
}