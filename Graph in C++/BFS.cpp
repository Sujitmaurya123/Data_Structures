

#include <bits/stdc++.h>
using namespace std;



void printAdj(unordered_map<int, set<int>> &adjList)
{
    for (auto i : adjList)
    {
        cout << i.first << "->";
        for (auto j : i.second)
        {
            cout << j << ",";
        }
        cout << endl;
    }
}

void preparedAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        // storefrontnode to ans
        ans.push_back(frontnode);
        // traverse all neighbours of frontnode
        for (auto i : adjList[frontnode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    preparedAdjList(adjList, edges);
    // printAdj(adjList);
    // traverse all components
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;
}

int main()
{
    vector<pair<int, int>> edges={
        // {0,1},{0,2},{1,3},{2,4},{2,5},{3,6},{4,6},{5,6}
        // vertex->4 and edges->3
        {0,1},{0,3},{1,3}
    };
    

    // BFS(3, edges);
   vector<int>ans=BFS(4,edges);
    
    for(int verte:ans){
      cout<<verte<<" ";
    }cout<<endl;

    return 0;
}
