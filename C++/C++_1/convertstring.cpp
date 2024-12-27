#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "afchjfaag";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}
// transform is used for a kya thi kya pchi kya thi
// shru karvu and kema karvu