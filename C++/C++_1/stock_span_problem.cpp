#include <bits/stdc++.h>

using namespace std;
vector<int> stockspan(vector<int> prices)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    for (auto price : prices)
    {
        int span = 1;
        while (!s.empty() && s.top().first <= price)
        {
            span += s.top().second;
            s.pop();
        }
        s.push({price, span});
        ans.push_back(span);
    }
    return ans;
}

int main()
{

    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = stockspan(a);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}