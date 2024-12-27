#include <bits/stdc++.h>

using namespace std;

int main()
{
    string A = "abcacdbd";
    string B = "";
    vector<int> repeated(26, 0);
    queue<int> q;
    for (int i = 0; i < A.size(); i++)
    {
        if (repeated[A[i] - 'a'] >= 1)
        {
            repeated[A[i] - 'a']++;
            while (!q.empty() && repeated[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            if (q.empty())
                B += "#";
            else
                B += q.front();
        }
        else
        {
            repeated[A[i] - 'a']++;
            q.push(A[i]);
            while (repeated[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            B += q.front();
        }
    }
    cout << B << endl;

    return 0;
}