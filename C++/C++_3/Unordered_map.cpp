#include <bits/stdc++.h>

using namespace std;

// unique keys are pressent
// duplicate keys are not present
// not in order

int main()
{
    unordered_map<int, int> m;
    m.insert(make_pair(20, 30));
    m.insert(make_pair(10, 20));
    m.insert(make_pair(30, 40));
    m.insert(make_pair(10, 20));
    m.insert(make_pair(30, 40));
    m.insert(make_pair(10, 20));
    m.insert(make_pair(30, 40));
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }

    return 0;
}