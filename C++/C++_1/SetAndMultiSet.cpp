#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> s; // if set to set and if multiset to multuset
                          // write and run this code
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    for (auto i : s)
    {
        cout << i << " ";
    }
    s.erase(s.find(4)); // s.find()for one occurnsce is delete
    cout << "\n";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << s.size() << "\n";

    return 0;
}