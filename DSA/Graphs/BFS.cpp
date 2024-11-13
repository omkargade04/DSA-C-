#include <bits/stdc++.h>
using namespace std;

void bfsTraversal(int V, vector<int> adj[])
{
    int vis[V+1] = {0};
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;

    while (!q.empty())
    {
        int node = q.front();
        // cout << "Node: " << node << endl;
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    for (int i = 0; i < bfs.size(); i++)
    {
        cout << bfs[i] << " ";
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    // for(auto it : arr) {
    //     for(int i=0;i<it.size();i++) {
    //         cout << it[i] << " ";
    //     }cout << endl;
    // }

    bfsTraversal(n, arr);

    return 0;
}