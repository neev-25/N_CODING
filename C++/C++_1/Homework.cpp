#include <bits/stdc++.h>

using namespace std;
int cube(int n)
{
    return n * n * n;
}
void printcd(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Hello Coder army" << endl;
    }
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{

    // for this age get discount and elligable
    //  int age;
    //  cin >> age;
    //  int price = 100;
    //  if (age < 12 || age > 65)
    //  {
    //      price = price - price * 30 / 100;
    //      cout << price << endl;
    //  }
    //  else
    //  {
    //      cout << price << endl;
    //  }
    // ascii table for big ch
    // for (int i = 0; i < 26; i++)
    // {
    //     char Ch = 'A' + i;
    //     char ch = 'a' + i;
    //     cout << Ch << " " << (int)Ch << endl;
    //     cout << ch << " " << (int)ch << endl;
    // }
    // for (int i = 25; i >= 0; i--)
    // {
    //     char Ch = 'A' + i;
    //     char ch = 'a' + i;
    //     cout << Ch << " " << (int)Ch << endl;
    //     cout << ch << " " << (int)ch << endl;
    // }
    // for (int i = 220; i <= 730; i += 7)
    // {
    //     cout << i << " ";
    // }
    // int n;
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i * i * i;
    //     cout << sum << endl;
    // }
    // int n;
    // cin >> n;
    // int term1 = 0;
    // int term2 = 1;
    // int nextterm;
    // cout << term1 << endl;
    // cout << term2 << endl;
    // for (int i = 0; i < n; i++)
    // {

    //     nextterm = term1 + term2;
    //     cout << nextterm << endl;
    //     term1 = term2;
    //     term2 = nextterm;
    // }
    // int n, m;
    // cin >> n >> m;
    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << j * j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 6; j++)
    //     {
    //         cout << j * j * j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         char ch = 'F' + j;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         char ch = j + 'A';
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << j + 10 << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4 - i; j++)
    //     {
    //         char ch = 'A' + j;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i + 1; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j >= 0; j--)
    //     {
    //         char ch = 'A' + j;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)

    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j >= 0; j--)
    //     {
    //         char ch = i + 'A';
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 5; j >= 5 - i; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 5; j >= 5 - i; j--)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 5; j >= n - i; j--)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2 * (i + 1) - 1; j++)
    //     {
    //         cout << j << "";
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         char ch = 'A' + j;
    //         cout << " " << ch;
    //     }
    //     for (int k = i - 1; k >= 0; k--)
    //     {
    //         char ch = 'A' + k;
    //         cout << " " << ch;
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 5; j >= n - i; j--)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 5; j >= n - i; j--)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // int temprature;
    // cout << "Enter the temperature in degree Celsius: ";
    // cin >> temprature;
    // int ferenhit = temprature * 9 / 5 + 32;
    // cout << "The temperature in degree Fahrenheit is: " << ferenhit;
    // int temp = ferenhit;
    // if (temp >= 70 && temp <= 90)
    // {
    //     cout << "The weather is nice." << endl;
    //     cout << "this is suitable tempature for swimming";
    // }
    // else
    // {
    //     cout << "The weather is not nice." << endl;
    // }

    // int n;
    // cin >> n;
    // if (n > 0 && n % 2 == 0)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    // int age;
    // cin >> age;
    // if (age > 13 && age < 19)
    // {
    //     cout << "Teenager" << endl;
    // }
    // else
    // {
    //     cout << "Not a teenager" << endl;
    // }

    // int a, b, c;
    // cin >> a >> b >> c;
    // if (a > b || a > c)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    // int a, b, c;
    // cin >> a >> b >> c;
    // if (a > b && a > c)
    // {
    //     cout << "a is for all";
    // }
    // else if (b > c && b > a)
    // {
    //     cout << "b is for all";
    // }
    // else if (c > b && c > a)
    // {
    //     cout << "c is for all";
    // }
    // else
    // {
    //     cout << "no one is for all";
    // }

    // int opra = 2 * 3 - 48 == 5 / 4 * 6;
    // cout << opra << endl;
    // int opra2 = 6 << 2 - 4 * 8 / 2;
    // cout << opra2 << endl;
    // int opra3 = 5 > 4 < 3 / 2 - 8 % 4 + 5;
    // cout << opra3 << endl;
    // int opra4 = 14 - 8 + 92 >> 2 + 70;
    // cout << opra4 << endl;

    // int n;
    // cin >> n;
    // // for (int i = 1; i <= n; i++)
    // // {
    // //     if (i % 2 == 0)
    // //     {
    // //         cout << i << " ";
    // //     }
    // // }
    // while (n != 0)
    // {
    //     if (n % 2 == 0)
    //     {
    //         cout << n << " ";
    //     }
    //     n--;
    // }

    // int fact = 1;
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     fact *= i;
    //     i++;
    // }
    // cout << fact << endl;

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {

    //     if (i % 3 != 0 && i % 5 != 0)
    //     {
    //         cout << i << " ";
    //         continue;
    //     }
    // }

    // for (int i = 1; i <= 12; i++)
    // {
    //     switch (i)
    //     {
    //     case 1:
    //         cout << "january" << i << endl;
    //         break;
    //     case 2:
    //         cout << "febuary" << i << endl;
    //         break;
    //     case 3:
    //         cout << "march" << i << endl;
    //         break;
    //     case 4:
    //         cout << "april" << i << endl;
    //         break;
    //     case 5:
    //         cout << "may" << i << endl;
    //         break;
    //     case 6:
    //         cout << "june" << i << endl;
    //         break;
    //     case 7:
    //         cout << "july" << i << endl;
    //         break;
    //     case 8:
    //         cout << "augest" << i << endl;
    //         break;
    //     case 9:
    //         cout << "september" << i << endl;
    //         break;
    //     case 10:
    //         cout << "octomber" << i << endl;
    //         break;
    //     case 11:
    //         cout << "november" << i << endl;
    //         break;
    //     case 12:
    //         cout << "december" << i;
    //         break;
    //     default:
    //         cout << "invalid month";
    //     }
    // }

    // int n;
    // cin >> n;
    // int i = 2;
    // bool isprime = false;
    // while (i != n)
    // {
    //     if (n % i != 0)
    //     {
    //         isprime = true;
    //     }
    //     else
    //     {
    //         isprime = false;
    //         break;
    //     }
    //     i++;
    // }
    // if (isprime)
    // {
    //     cout << "prime" << endl;
    // }
    // else
    // {
    //     cout << "not prime" << endl;
    // }

    // int n;
    // cin >> n;
    // int temp = n;
    // int ans = 0;
    // int rem;
    // int ten = 1;
    // while (temp != 0)
    // {
    //     rem = temp % 2;
    //     ans = rem * ten + ans;
    //     temp /= 2;
    //     ten *= 10;
    // }
    // cout << ans << endl;

    // int n;
    // cin >> n;
    // int temp = n;
    // int rem;
    // int ans = 0;
    // int two = 1;
    // while (temp != 0)
    // {
    //     rem = temp % 10;
    //     ans = rem * two + ans;
    //     two *= 2;
    //     temp /= 10;
    // }
    // cout << ans << endl;

    // int n;
    // cin >> n;
    // int temp = n;
    // int ans = 0;
    // int rem;
    // int ten = 1;
    // while (temp != 0)
    // {
    //     rem = temp % 8;
    //     ans = rem * ten + ans;
    //     temp /= 8;
    //     ten *= 10;
    // }
    // cout << ans << endl;

    // int n;
    // cin >> n;
    // int temp = n;
    // int rem;
    // int ans = 0;
    // int eight = 1;
    // while (temp != 0)
    // {
    //     rem = temp % 10;
    //     ans = rem * eight + ans;
    //     eight *= 8;
    //     temp /= 10;
    // }
    // cout << ans << endl;

    // int n;
    // cin >> n;
    // int temp = n;
    // int rem;
    // int ans = 0;
    // int two = 1;
    // while (temp != 0)
    // {
    //     rem = temp % 10;
    //     ans = rem * two + ans;
    //     two *= 2;
    //     temp /= 10;
    // }
    // int temp1 = ans;
    // int ans1 = 0;
    // int rem1;
    // int ten1 = 1;
    // while (temp1 != 0)
    // {
    //     rem1 = temp1 % 8;
    //     ans1 = rem1 * ten1 + ans1;
    //     temp1 /= 8;
    //     ten1 *= 10;
    // }
    // cout << ans1 << endl;

    // int n;
    // cin >> n;
    // cout << cube(n);

    // int n;
    // cin >> n;
    // int ans = 0;
    // int temp = n;
    // while (temp != 0)
    // {
    //     int ld = temp % 10;
    //     ans = ans * 10 + ld;
    //     temp /= 10;
    // }
    // cout << ans << endl;

    // int a = 10;
    // int b = 20;
    // cout << a << " " << b << endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout << a << " " << b;

    // int n;
    // cin >> n;
    // printcd(n);

    // int n, r;
    // cin >> n >> r;
    // int ans = fact(n) / (fact(n - r) * fact(r));
    // cout << ans << endl;

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // cout << sum << endl;

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int sum = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // int avg = sum / n;
    // cout << avg << endl;

    // int n;
    // cin >> n;
    // int key;
    // cin >> key;
    // int arr[n];
    // bool found = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == key)
    //     {
    //         cout << i << endl;
    //         found = 1;
    //         break;
    //     }
    // }
    // if (found)
    // {
    //     cout << "Element found at index " << endl;
    // }
    // else
    // {
    //     cout << "-1" << endl;
    // }

    // char arr[26];
    // for (int i = 0; i < 26; i++)
    // {
    //     arr[i] = 'A' + i;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // cout << arr[n - 2] << endl;

        return 0;
}
