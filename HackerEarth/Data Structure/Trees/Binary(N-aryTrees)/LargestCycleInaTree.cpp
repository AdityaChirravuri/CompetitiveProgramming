#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define MAX 100001
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
 
vector<ll>adj[MAX];
vector<ll>vis(MAX, false);
vector<ll>level(MAX);
 
void DFS(int i)
{
    vis[i] = true;
    //cout << i << " ";
    for(auto j=adj[i].begin(); j!=adj[i].end(); j++){
        if(!vis[*j]){
            level[*j] = level[i]+1;
            DFS(*j);
        }
    }
}
 
int main()
{
    fastIO
    ll N;
    cin >> N;
    for(ll i=0; i<N-1; i++){
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    level[1] = 1;
    DFS(1);
    
    ll max = -1, ind;
    for(ll i=1; i<=N; i++){
        if(max < level[i]){
            max = level[i];
            ind = i;
        }
        vis[i] = false;
    }   
    cout <<  ind << " ";
    DFS(ind);
    max = -1;
    for(ll i=1; i<=N; i++){
        if(max < level[i]){
            max = level[i];
            ind = i;
        }
    }
    cout << ind;
    return 0;
}
