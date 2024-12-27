#include <bits/stdc++.h>

using namespace std;

bool check(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            if (s.empty())
                return 0;
            else
                s.pop();
        }
    }
    return s.empty();
}
bool check2(string str)
{
    int left = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            left++;
        else
        {
            if (left == 0)
                return 0;
            else
                left--;
        }
    }
    return left == 0;
}
int main()
{
    string str;
    cin >> str;
    if (check2(str))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}