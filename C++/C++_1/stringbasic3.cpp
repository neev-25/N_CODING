#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "nincompoop";

    s1.erase(3, 2);

    cout << s1 << endl;
    cout << s1.find("poo") << endl;
    s1.insert(2, "lol");
    cout << s1 << endl;
    return 0;
}
// s1.erase use a clear a char form word and howmuny word
// s1.insert use a insert a word in a word
// s1.find use a find a word in a word
