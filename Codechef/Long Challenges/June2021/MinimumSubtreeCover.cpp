#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vi vector<ll>
#define vvi vector<vector<ll>>
//vector<int>adj[MAX];
//#define MAX 100001

ll getFar(ll node, vvi & G, ll n){
    vector<bool> done(n+1, false);
    ll fd=-1, far; done[node] = true;
    queue<pair<int, int>> qu; qu.push({node, 0});
    while(qu.size()){
        auto pi = qu.front();
        qu.pop();
        ll nod = pi.first, dis = pi.second;
        if(fd < dis) fd = dis, far = nod;
        for(auto cnod: G[nod]){
            if(done[cnod]) continue;
            done[cnod] = true;
            qu.push({cnod, dis+1});
        }
    }
    
    return far;
}

void dfs(ll nod, ll par, vvi & G, vi & H, vi & li, ll cur){
    bool isleaf = true;
    ll mx = LLONG_MIN;
    for(auto cnod: G[nod])if(cnod != par) {
        isleaf = false; 
        mx = max(mx, H[cnod]);
    }
    if(isleaf){
        li.push_back(cur);
        return;
    }

    ll c = 0;
    for(auto cnod: G[nod]){
        if(cnod == par) continue;
        if(H[cnod] == mx && c==0){
        dfs(cnod, nod, G, H, li, cur+1); c++;
        }else dfs(cnod, nod, G, H, li, 1);
    }
}



void fixHeight(ll nod, ll par, vvi & G, vi & H){
    bool isleaf = true;
    for(auto cnod: G[nod]){
        if(cnod == par) continue;
        isleaf = false;
        fixHeight(cnod, nod, G, H);
        H[nod] = max(H[nod], 1 + H[cnod]);
    }
    if(isleaf) H[nod] = 1;
}

void breakIntoLines(ll nod, ll par, vvi & G, vi&li, ll n){
    vector<ll> H(n+1, 0);
    fixHeight(nod, par, G, H);
    dfs(nod, par, G, H, li, 1);
}

ll getSol(vvi & gr, ll n, ll k){
    if(k==1) return 1;
    ll u = getFar(1, gr, n);
    vector<ll> li;
    breakIntoLines(u, 0, gr, li, n);
    sort(li.rbegin(), li.rend());
    ll size = 1, total = 0, i = 0;
    while(total < k){
        size++; total += li[i++];
    }

    return size;
}

void solve(){
    ll n, k, u, v;
    cin>>n>>k;
    vvi gr(n+1);
    for(ll i=1; i<n; i++){
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    
    cout << getSol(gr, n, k) << "\n";
}

int main(){
    fastIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
/*ll GetFar(ll node, ll n)
{
    vector<bool>vis(n+1, false);
    ll fd = -1, far;
    vis[node] = true;

    list<pair<int, int>>arr;
    arr.push_back({node, 0});

    while(!arr.empty()){
        auto p = arr.front();
        arr.pop_front();

        ll nod = p.first;
        ll dis = p.second;


        if(fd < dis){
            fd = dis;
            far = node;
        }

        for(auto cnode = adj[nod].begin(); cnode !=adj[nod].end(); conde++){
            if(!vis[*cnode]){
                vis[*cnode] = true;
                arr.push_back({*cnode, dis+1});
            }
        }
    }

}

void DFS(ll nod, ll par ,vi &h, vi & li, ll cur)
{
    
}*/
