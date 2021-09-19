#include<bits/stdc++.h>
using namespace std;

#define v vector<int>
const int N=1e5+2;
vector<int>adj_mat[N];

bool isBipartite(vector<vector<int>>& graph, int n,int source){
    queue<int> q;
    int color[n];
    for(int i=0;i<n;i++){
        color[i]=-1;
    }
    color[source]=1;
    q.push(source);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(graph[u][u]==1) return false;
        for(int i=0;i<n;i++){
            if(graph[u][i] && color[i]==-1){
                color[i]=1-color[u];
                q.push(i);
            }
            else if(graph[u][i] && color[i]==color[u]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> adj_mat(n+1, v(n+1,0));

    //input the adjacency matrix
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj_mat[x][y]=1;
        adj_mat[y][x]=1;
    }

    //print the adjacency matrix
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    (isBipartite(adj_mat,n,0)) ? cout<<"Graph is bipartite. ":cout<<"Graph is not bipartite.";
    
}