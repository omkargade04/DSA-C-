#include<bits/stdc++.h>
using namespace std;

void dfs(int start, int vis[], vector<int> adj[], vector<int> &arr) {
    vis[start] = 1;
    arr.push_back(start);

    for(auto i : adj[start]) {
        if(!vis[i]) {
            dfs(i, vis, adj, arr);
        }
    }
}

void dfsTraversal(int V, vector<int> adj[]) {
    int start = 1;
    int vis[V+1] = {0};
    vector<int> arr;
    dfs(start, vis, adj, arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
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

    dfsTraversal(n, arr);

    return 0;
}