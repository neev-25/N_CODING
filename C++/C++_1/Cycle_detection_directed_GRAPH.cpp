#include <bits/stdc++.h>

using namespace std;

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack)
{
    stack[src] = true;
    if (!visited[src])
    {
        visited[src] = true;
        for (auto i : adj[src])
        {
            if (!visited[i] and isCycle(i, adj, visited, stack))
            {
                return true;
            }
            if (stack[i])
            {
                return true;
            }
        }
    }
    stack[src] = false;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        }
    bool cycle = false;
    vector<int> stack(n, 0);
    vector<bool> visited(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] and isCycle(i, adj, visited, stack))
        {
            cycle = true;
        }
    }

    if (cycle)
    {
        cout << "Cycle exists";
    }
    else
    {
        cout << "Cycle does not exist";
    }

    return 0;
}