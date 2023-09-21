#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numVertices = 5; // Number of vertices in the graph
    // Declare an array of vectors to represent adjacency list
    vector<int> adj[numVertices];

    // Add edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(4);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[3].push_back(4);

    // Print the adjacency list
    for (int i = 0; i < numVertices; i++) {
        cout << "Adjacent vertices of vertex " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//out put 
// Adjacent vertices of vertex 0: 1 4
// Adjacent vertices of vertex 1: 2 3
// Adjacent vertices of vertex 2: 3
// Adjacent vertices of vertex 3: 4
// Adjacent vertices of vertex 4:



//aur ak tarika hai
// vector<vector<int>> printGraph(int V, vector<int> adj[])
// {
//     // Code here
//     vector<vector<int>> ans;
//     for (int i = 0; i < V; i++)
//         ans.push_back(vector<int>{i});

//     for (int i = 0; i < V; i++)
//         for (int j = 0; j < adj[i].size(); j++)
//             ans[i].push_back(adj[i][j]);

//     return ans;
// }

// aur ak tarika hai 2

/*
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[],int v){
    for(int i=0,i<n,i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }cout<<"\n";
    }
}

int main(){
    int v=4;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    printGraph(adj,v);
    return 0;
   
}
*/

/*
 // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto x:edges){
            int u=x.first;
            int v=x.second;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        return adj;
    }

*/