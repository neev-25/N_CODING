#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1 = "abc";
    string s2 = "abc";
    // if (s1.compare(s2) == 0)
    if (!s1.compare(s2))
        cout << "strings are equal";
    cout << s2.compare(s1) << endl;

    return 0;
}
//! compare means don't change in a s1 and s2