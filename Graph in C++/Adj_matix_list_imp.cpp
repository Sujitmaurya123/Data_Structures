#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph2[N];


int main(){

int n,m;
cin>>n>>m;
// adjacency matrix
int adjmat[n+1][n+1];
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adjmat[u][v]=1;
    adjmat[v][u]=1;

// adjacency list
    graph2[v].push_back(u);
    graph2[u].push_back(v);
}



return 0;


}