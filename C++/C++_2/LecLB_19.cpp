#include <bits/stdc++.h>

using namespace std;

int main()
{

    // ARRAY

    // int basic[3] = {1, 2, 3};
    // array<int, 4> a = {1, 2, 3, 4};
    // int size = a.size();
    // cout << size << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i] << endl;
    // }
    // cout << "element at 2nd Index->" << a.at(2) << endl;
    // cout << "empty or not->" << a.empty() << endl;
    // cout << "first ele->" << a.front() << endl;
    // cout << "last ele->" << a.back() << endl;

    // VECTOR

    // vector<int> v;
    // v.push_back(1);
    // cout << "capacity->" << v.capacity() << endl;
    // cout << "size->" << v.size() << endl;
    // v.push_back(2);
    // v.push_back(3);
    // /*vector<int> cpy(v);
    // cout << "size of cpy->" << cpy.size() << endl;
    // for (auto i : cpy)
    // {
    //     cout << i << endl;
    // }
    // */
    // cout << "capacity->" << v.capacity() << endl;
    // cout << "size->" << v.size() << endl;
    // cout << "at 2nd index->" << v.at(2) << endl;
    // cout << "front->" << v.front() << endl;
    // cout << "back->" << v.back() << endl;
    // cout << "empty or not->" << v.empty() << endl;
    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }
    // v.pop_back();
    // cout << "after pop_back->" << v.size() << endl;
    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }
    // cout << "before clear size->" << v.size() << endl;
    // v.clear();
    // cout << "after clear size->" << v.size() << endl;
    // vector<int> inl(5, 1);
    // for (auto i : inl)
    // {
    //     cout << i << endl;
    // }

    // DEQUE

    // deque<int> d;
    // d.push_back(1);
    // d.push_back(2);
    // d.push_front(3);
    // for (auto i : d)
    // {
    //     cout << i << endl;
    // }
    // // d.pop_front();
    // for (auto i : d)
    // {
    //     cout << i << endl;
    // }
    // // d.pop_back();
    // for (auto i : d)
    // {
    //     cout << i << endl;
    // }
    // cout << "print forst index element->" << d.at(1) << endl;
    // cout << "front" << d.front() << endl;
    // cout << "back" << d.back() << endl;
    // cout << "size" << d.size() << endl;
    // cout << "empty or not" << d.empty() << endl;
    // cout << "before erase" << d.size() << endl;
    // d.erase(d.begin() + 1);
    // cout << "after erase" << d.size() << endl;
    // for (auto i : d)
    // {
    //     cout << i << endl;
    // }

    // STACK

    // stack<string> s;
    // s.push("mendpara");
    // s.push("neev");
    // s.push("kumar");
    // cout << "Top element-> " << s.top() << endl;
    // s.pop();
    // cout << "Top element-> " << s.top() << endl;
    // cout << "size of Stack->" << s.size() << endl;
    // cout << "empty or not->" << s.empty() << endl;

    // QUEUE

    // queue<string> q;
    // q.push("mendpara");
    // q.push("neev");
    // q.push("kumar");
    // cout << "Front element-> " << q.front() << endl;
    // cout << "Rear element-> " << q.back() << endl;
    // q.pop();
    // cout << "Front element-> " << q.front() << endl;
    // cout << "size of Queue->" << q.size() << endl;
    // cout << "empty or not->" << q.empty() << endl;

    // PRIORITY QUEUE

    // priority_queue<int> maxi;
    // priority_queue<int, vector<int>, greater<int>> mini;
    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);
    // cout << maxi.size() << endl;
    // int n = maxi.size(); // this is important
    // for (int i = 0; i < n; i++)
    // {
    //     cout << maxi.top() << " ";
    //     maxi.pop();
    // }
    // cout << endl;
    // mini.push(5);
    // mini.push(3);
    // mini.push(2);
    // mini.push(0);
    // cout << mini.size() << endl;
    // n = mini.size(); // this is important
    // for (int i = 0; i < n; i++)
    // {
    //     cout << mini.top() << " ";
    //     mini.pop();
    // }
    // cout << endl;
    // cout << "it is empty or not ?? " << mini.empty() << endl;

    // SET

    // set<int> s;
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(1);
    // s.insert(6);
    // s.insert(6);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // set<int>::iterator it = s.begin();
    // it++;
    // s.erase(it);
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << "s is presemt or not->" << s.count(5) << endl;
    // set<int>::iterator itr = s.find(5);
    // cout << "itr is pointing to " << *itr << endl;
    // for (auto it = itr; it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout<<endl;

    // MAP

    // map<int, string> m;
    // m.insert({1, "one"});
    // m.insert({2, "two"});
    // m.insert({3, "three"});
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << endl;
    // map<int, string> m1;
    // m1[1] = "one";
    // m1[2] = "two";
    // m1[3] = "three";
    // for (auto i : m1)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // m.insert({5, "five"});
    // cout << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << "finding 3->" << m.count(3) << endl;
    // cout << "finding 4->" << m.count(4) << endl;

    // m.erase(3);
    // cout << endl;
    // cout << "after erasing 3->" << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // auto it = m.find(5);
    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout << (*i).first << " " << (*i).second << endl;
    // }

    // ALGORITHEM

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout << "finding 6->" << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "lower bound->" << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "upper bound->" << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "max->" << max(a, b) << endl;
    cout << "min->" << min(a, b) << endl;
    swap(a, b);
    cout << "after swap->" << a << " " << b << endl;
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    sort(v.begin(), v.end());
    cout << "after sort" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}