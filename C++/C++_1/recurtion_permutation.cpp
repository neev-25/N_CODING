#include <bits/stdc++.h>

using namespace std;

void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        // cout << s.substr(0, i) << " " << s.substr(i + 1) << " " << " " << endl;
        permutation(ros, ans + ch);
    }
}
int main()
{
    permutation("ABC", "");

    return 0;
}
// this is by divided and store all ch
// afterfor ros that use this process