#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component)
{
    component.push_back(node);
    visited[node] = true;
    // har connected node k liye recursive call
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adjlist
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    // call all node DFS if not visited
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}


int main(){

    vector<vector<int>>edges={
            {0,2},{0,1},{1,2},{3,4}
    };
    int V=5;
    int E=4;

    vector<vector<int>>ans= depthFirstSearch(V,E,edges);
//   int el=ans[0][0];
//   cout<<el<<endl;
    cout << ans.size() << endl;
    for (const auto &innerVector : ans)
    {
     
        for (const auto &element : innerVector)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}