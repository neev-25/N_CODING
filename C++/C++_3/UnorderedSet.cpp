#include <bits/stdc++.h>

using namespace std;

int main()
{
    // it contain only unique elements
    // search ,insert and removel have average constant time complexity
    // it use hashing technique
    // unordered_set<int> s;
    // s.insert(1634);
    // s.insert(24);
    // s.insert(243);
    // s.insert(42);
    // s.insert(535);
    // s.insert(23);
    // s.insert(2342);
    // s.insert(351);
    // s.insert(312);
    // s.insert(535); // here 535 two time so one timen will be disapper
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    //::::::::::::::::::::::::::::::::::::::::::::::::::::::::
    unordered_multiset<int> s;
    s.insert(1634);
    s.insert(24);
    s.insert(243);
    s.insert(42);
    s.insert(535);
    s.insert(23);
    s.insert(2342);
    s.insert(351);
    s.insert(312);
    s.insert(535); // here 535 two time but allowed in multiple time
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}