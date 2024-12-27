#include <bits/stdc++.h>

using namespace std;

int main()
{

    // // create vecotr,declare
    // vector<int> v;
    // vector<int> v1(5, 1);
    // // size and capacity
    // cout << "size of v : " << v.size() << endl;
    // cout << "capacity of a v : " << v.capacity() << endl;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // cout << "size is : " << v.size() << endl;
    // cout << "capacity is : " << v.capacity() << endl;
    // // updte value
    // v[1] = 5;
    // cout << "value at index 1 is : " << v[1] << endl;
    // cout << "size is : " << v1.size() << endl;
    // cout << "capacity is : " << v1.capacity() << endl;
    // v1.push_back(40);
    // cout << "size is : " << v1.size() << endl;
    // cout << "capacity is : " << v1.capacity() << endl;
    // vector<int> v3 = {1, 2, 3, 4, 5};
    // cout << "size is : " << v3.size() << endl;
    // cout << "capacity is : " << v3.capacity() << endl;
    // vector<int> vnew;
    // vnew.push_back(10);
    // vnew.push_back(20);
    // vnew.push_back(30);
    // vnew.push_back(40);
    // vnew.push_back(3);
    // vnew.pop_back();
    // cout << "size is : " << vnew.size() << endl;
    // cout << "capacity is : " << vnew.capacity() << endl;
    // cout << vnew[1] << endl;
    // vnew.erase(vnew.begin() + 1);
    // cout << vnew[1] << endl;
    // cout << "size is : " << vnew.size() << endl;
    // cout << "capacity is : " << vnew.capacity() << endl;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // vnew.insert(vnew.begin() + 1, 56);
    // cout << endl;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout << endl;

    // cout << "size is : " << vnew.size() << endl;
    // cout << "capacity is : " << vnew.capacity() << endl;
    // vnew[1] = 37;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout << endl;
    // vnew.clear();
    // cout << "size is : " << vnew.size() << endl;
    // cout << "capacity is : " << vnew.capacity() << endl;

    // vector<int> arr;
    // arr.push_back(2);
    // arr.push_back(4);
    // arr.push_back(6);
    // arr.push_back(8);
    // cout << arr[0] << endl;
    // cout << arr.front() << endl;
    // cout << arr[arr.size() - 1] << endl;
    // cout << arr.back() << endl;

    // vector<int> a;
    // // copy value to another vctor
    // a = arr;
    // cout << a.size();
    // cout << endl;
    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }

    vector<int> ans;
    ans.push_back(6);
    ans.push_back(383);
    ans.push_back(37);
    ans.push_back(48);
    ans.push_back(92);
    ans.push_back(299);
    // sort(ans.begin(), ans.end());
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }
    // sort(ans.begin(), ans.end(), greater<int>()); // sort(ans.rbegin,ans.rend);
    // cout << endl;
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }
    cout << binary_search(ans.begin(), ans.end(), 48) << endl;
    cout << find(ans.begin(), ans.end(), 48) - ans.begin() << endl;
    int cnt = count(ans.begin(), ans.end(), 6);
    cout << cnt << endl;
    int maximum = max_element(ans.begin(), ans.end());
    cout << maximum << endl;

    return 0;
}