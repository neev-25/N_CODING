#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(23);
    cout << l.front() << " " << l.back() << endl;
    l.push_front(0);
    cout << l.front() << " " << l.back() << endl;
    cout << l.size() << endl;
    l.pop_front();
    cout << l.front() << " " << l.back() << endl;
    cout << l.size() << endl;
    l.pop_back();
    cout << l.front() << " " << l.back() << endl;
    l.push_back(12);
    l.push_back(34);
    l.push_back(45);
    l.push_back(56);
    // itreator
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // reverse iterator
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}