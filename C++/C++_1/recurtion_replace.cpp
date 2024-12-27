#include <bits/stdc++.h>

using namespace std;
void replacepi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    replacepi("pippppiiiipi");

    return 0;
}
// when pi so remove it and print 3.14
// when p so remove it and reststring call it replace pi
// when 0 then return