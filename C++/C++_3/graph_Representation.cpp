#include <bits/stdc++.h>
using namespace std;

int main()
{
    // adjecency matrix
    // int vertex, edges;
    // cin >> vertex >> edges;
    // // vector<vector<bool>> adjmat(vertex, vector<bool>(vertex, 0)); // undirectedunwieghted graph
    // vector<vector<int>> adjmat(vertex, vector<int>(vertex, 0)); // undiredted weighted graph
    // // int u, v;
    // int u, v, weight;
    // for (int i = 0; i < edges; i++)
    // {
    //     // cin >> u >> v;
    //     // adjmat[u][v] = 1;
    //     // adjmat[v][u] = 1;
    //     cin >> u >> v >> weight;
    //     adjmat[u][v] = weight;
    //     adjmat[v][u] = weight;
    //     // when diredcted graph so we write adhmat[u][v] only not other
    // }
    // for (int i = 0; i < vertex; i++)
    // {
    //     for (int j = 0; j < vertex; j++)
    //     {
    //         cout << adjmat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // adjecency list
    int vertex, edges;
    cin >> vertex >> edges;
    // vector<int> adjlist[vertex]; // undirected unweighted graph
    vector<pair<int, int>> adjlist[vertex]; // undirected weighted graph
    // int u, v;
    int u, v, weight;
    for (int i = 0; i < edges; i++)
    {
        // cin >> u >> v;
        // adjlist[u].push_back(v);
        // adjlist[v].push_back(u);

        cin >> u >> v >> weight;
        adjlist[u].push_back(make_pair(v, weight));
        adjlist[v].push_back(make_pair(u, weight));
    }
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            // cout << adjlist[i][j] << " ";
            cout << adjlist[i][j].first << "^" << adjlist[i][j].second << " ";
        }
        cout << endl;
    }
}