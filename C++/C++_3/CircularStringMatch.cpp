#include <bits/stdc++.h>

using namespace std;

void lpsfind(vector<int> &lps, string s)
{
    int first = 0, second = 0;
    int pre = 0, suf = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[first] == s[second])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int main()
{
    string s1 = "cdeabroab";
    string s2 = "abcde";
    s1 = s1 + s1;
    cout << s1 << endl;
    vector<int> lps(s1.size(), 0);
    lpsfind(lps, s2);
    int first = 0, second = 0;
    while (first < s1.size() && second < s2.size())
    {
        if (s1[first] == s2[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
    }
    if (second == s2.size())
    {
        cout << (first - second) % ;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}