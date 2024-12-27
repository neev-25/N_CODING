#include <bits/stdc++.h>

using namespace std;

int main()
{

    pair<string, int> p;
    p = make_pair("neev", 17);
    cout << p.first << endl;
    cout << p.second << endl;
    pair<string, pair<int, int>> person;
    person = make_pair("Neev", make_pair(17, 70));
    cout << person.first << endl;
    cout << person.second.first << endl;
    cout << person.second.second << endl;
    pair<pair<int, int>, int> merge;
    merge = make_pair(make_pair(1, 2), 3);
    cout << merge.first.first << endl;
    cout << merge.first.second << endl;
    cout << merge.second << endl;

    return 0;
}