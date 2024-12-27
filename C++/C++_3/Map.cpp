#include <bits/stdc++.h>

using namespace std;

int main()
{
    // it store data i key-value pair
    // It uses red -blck tree or avl for implenetation
    // insertion deletion, and search opraeations have logaritimitic
    // o(log(n)),making them fast for most use cases.
    map<int, int> m;
    m.insert(make_pair(20, 30));
    m.insert(make_pair(10, 20));
    m.insert(make_pair(30, 40));
    m.insert(make_pair(40, 50));
    m.insert(make_pair(50, 60));
    m.insert(make_pair(60, 50));
    m.insert(make_pair(70, 60));
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }
    m[100] = 32; // insertion
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }
    m[30] = 45; // updation
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }
    if (m.count(200))
        cout << m[200] << " ";

    cout << m[200] << " ";
    m.erase(30); // deletion
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }
    // multimap
    multimap<int, int> m1;
    m1.insert(make_pair(20, 30));
    m1.insert(make_pair(10, 20));
    m1.insert(make_pair(30, 40));
    m1.insert(make_pair(40, 50));
    m1.insert(make_pair(50, 60));
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        cout << it->first << "-->" << it->second << endl;
    }

    return 0;
}