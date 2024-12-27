#include <bits/stdc++.h>

using namespace std;

// int sum(int x, int y)
// {
//     return x + y;
// }
// int multiply(int x, int y)
// {
//     return x * y;
// }
// void fun()
// {
//     cout << "hello neev mendpara";
// }

// bool isprime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// int fact(int n) // defulat for int n=3;
// {
//     int ans = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         ans *= i;
//     }
//     return ans;
// }

void swap(int &a, int &b) // pass by refrence
// void swap(int a, int b)//by value
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << sum(a, b) << endl;
    // cout << multiply(a, b) << endl;
    // fun();

    // int a, b;
    // cout << "enter the number 1 : " << endl;
    // ;
    // cin >> a;
    // cout << "enter the number 2 : " << endl;
    // cin >> b;
    // cout << isprime(a) << " ";
    // cout << fact(a) << " ";
    // cout << isprime(b) << " ";
    // cout << fact(b) << " ";
    // cout << isprime(b - a) << " ";
    // cout << fact(b - a) << " ";

    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;

    return 0;
}