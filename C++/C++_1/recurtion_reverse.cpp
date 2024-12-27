#include <bits/stdc++.h>

using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    cout << ros << endl;
    reverse(ros);

    cout << s[0];
}

int main()
{
    reverse("binod");
    return 0;
}
// that is remove fira=st char '
// aand print baki word
//  and print s[0]