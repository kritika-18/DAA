#include<bits/stdc++.h>
using namespace std;

#define v vector<int> 
const int N=1e5+2;

vector<int> adj_mat[N];


bool isDfs(vector<vector<int>>& graph,int node,int source,int destination){
    bool vis[node];
    for(int i=0;i<node;i++){
        vis[i]=false;
    }
    stack<int> st;
    st.push(source);
    vis[source-1]=true;
    while(!st.empty()){
        source=st.top();
        st.pop();
        for(int i=0;i<(int)graph[source-1].size();i++){
            if(graph[source-1][i]==destination) return true;
            if(vis[graph[source-1][i]-1]==false){
                st.push(graph[source-1][i]);
                vis[graph[source-1][i]-1]=true;
            }
        }
    }
    return false;
    
}

int main(){
    int n,e;
    
    cin>>n>>e;  //no of nodes and edges
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
    int source,destination;
    cin>> source>>destination;
    if (!isDfs(adj_mat,n,source,destination)) {
        cout<<"Yes! Path exists."<<endl;
    }
    else cout<<"Path does not exist."<<endl;
    
}