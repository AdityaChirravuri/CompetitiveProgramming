#include <bits/stdc++.h>
using namespace std;
 
void insertG(vector<int> G[100001],int u,int v){
 
    G[u].push_back(v) ;
 
    G[v].push_back(u) ;
 
}
 
int edg=0 ;
 
void DFS(vector<int> G[100001],int u,int n,vector<bool>&visited){
 
    visited[u]=true ;
 
    for(int i=0;i<G[u].size();++i){
 
        int v=G[u][i];
 
        if(!visited[v]){
 
            ++edg;
 
            DFS(G,v,n,visited);
 
        }
 
    }
 
}
 
int main(){
 
    int n,m,k,u,v;
 
    vector<int> G[100001] ;
 
    cin>>n>>m>>k;       
 
    for(int i=0;i<m;++i){
 
        cin>>u>>v ;
 
        insertG(G,u,v);
 
    }
 
    vector<bool>visited(n,false);
 
    int cmpcnt=0 ;
 
    for(int i=1 ;i<=n;++i)
 
        if(!visited[i]){
 
            ++cmpcnt ;
 
            DFS(G,i,n,visited);
 
        }   
 
    if(cmpcnt>k)cout<<"-1";
 
    else{
 
        cout<<m-(n-k);
 
    }           
 
    return 0 ;      
 
}
