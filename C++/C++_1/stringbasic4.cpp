#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "nincompoop";
    cout << s1.length() << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }

    string s = s1.substr(6, 4);
    cout << s << endl;

    // string s1 = "786";
    // int x = stoi(s1); // stringtointegers
    // cout << x + 2 << endl;

    // int x = 786;
    // cout << to_string(x) + "2" << endl;
    return 0;
}
// lenght used for every print char
// substr used for substring print where to how many
// stoi used for string to integer conversion
// to_string used for integer to string conversion and in append a new chara