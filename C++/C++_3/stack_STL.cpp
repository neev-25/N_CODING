#include <bits/stdc++.h>

using namespace std;

int main()
{

    stack<int> s;
    s.push(6);
    s.push(82);
    s.push(29);
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;
    cout << s.empty() << endl;
    s.pop();
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}