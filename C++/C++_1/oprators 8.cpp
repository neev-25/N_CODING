#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "divisible by both";
    }
    else if (n % 2 == 0)
    {
        cout << "divisible by 2";
    }
    else if (n % 3 == 0)
    {
        cout << "divisible by 3";
    }
    else
    {
        cout << "didvisible by none";
    }

    return 0;
}