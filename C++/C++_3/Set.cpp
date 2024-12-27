#include <bits/stdc++.h>

using namespace std;
class Person
{
public:
    string name;
    int age;
    bool operator<(const Person &other) const
    {
        return age < other.age;
    }
};
int main()
{
    // asdening order sort
    //  set<int> s;
    //  s.insert(1);
    //  s.insert(2);
    //  s.insert(3);
    //  s.insert(321);
    //  s.insert(4);
    //  s.insert(32);
    //  s.insert(323);
    //  s.insert(121);
    //  s.insert(123);
    //  for (auto it = s.begin(); it != s.end(); it++)
    //  {
    //      cout << *it << " ";
    //  }
    //.....................................................................
    // desendinf order store in set
    //  set<int, greater<int>> s;
    //  s.insert(1);
    //  s.insert(2);
    //  s.insert(3);
    //  s.insert(321);
    //  s.insert(4);
    //  s.insert(32);
    //  s.insert(323);
    //  s.insert(121);
    //  s.insert(123);
    //  // created into the sorted form
    //  for (auto it = s.begin(); it != s.end(); it++)
    //  {
    //      cout << *it << " ";
    //  }
    //........................................................................
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(321);
    // s.insert(4);
    // s.insert(32);
    // s.insert(323);
    // s.insert(121);
    // s.insert(123);
    // if (s.find(4) != s.end())
    // {
    //     cout << "present";
    // }
    // else
    // {
    //     cout << "not present";
    // }
    // cout << endl;
    // if (s.count(121))
    //     cout << "pre" << endl;
    // else
    //     cout << "not pre" << endl;
    // cout << s.count(121) << " ";
    // cout << s.erase(121) << " ";
    // cout << s.count(121) << " ";
    //.......................................................................
    // set<Person> s;
    // Person p1, p2, p3;
    // p1.name = "Rohit";
    // p1.age = 23;
    // p2.name = "mohit";
    // p2.age = 12;
    // p3.name = "gohit";
    // p3.age = 43;
    // s.insert(p1);
    // s.insert(p2);
    // s.insert(p3);
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << (*it).name << " ";
    //     cout << (*it).age << " ";
    //     cout << endl;
    // }
    //............................................................
    multiset<int> s; // multiple element are allowed and sorted form get it..
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(321);
    s.insert(4);
    s.insert(2);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    s.erase(2);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; // both are erase ..
    }

    return 0;
}