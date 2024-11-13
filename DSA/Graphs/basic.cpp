#include<bits/stdc++.h>
using namespace std;

int main() {

    //n is number of nodes/vertices and m is number of edges
    int n,m;cin>>n>>m;

    //storing undirected graph using adjacency matrix
    int adj[n+1][m+1];
    for(int i=0;i<m;i++) {
        int u,v;cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    //storing undirected graph using adjacency list
    vector<int> arr[n+1];
    for(int i=0;i<m;i++) {
        int u,v;cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    return 0;
}