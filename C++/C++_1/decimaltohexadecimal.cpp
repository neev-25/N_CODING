#include <bits/stdc++.h>

using namespace std;

string hexanum(int n)
{
    string s = "";
    while (n > 0)
    {
        int temp = n % 16;
        if (temp >= 0 && temp <= 9)
        {
            s.push_back(char(temp + '0'));
        }
        else if (temp >= 10 && temp <= 16)
        {
            s.push_back(char(temp + 'A' - 10));
        }
        n /= 16;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{

    int n;
    cin >> n;
    cout << hexanum(n) << endl;

    return 0;
}
//
