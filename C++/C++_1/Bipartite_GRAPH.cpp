#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;

void color(int u, int currcolor)
{
    if (col[u] != -1 and col[u] != currcolor)
    {
        bipart = false;
        return;
    }
    col[u] = currcolor;
    if (vis[u])
    {
        return;
    }
    vis[u] = true;
    for (int i : adj[u])
    {
        color(i, 1 - currcolor);
        // color(i, currcolor xor 1);
    }
}

int main()
{
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);
    bipart = true;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            color(i, 0);
        }
    }
    if (bipart)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}