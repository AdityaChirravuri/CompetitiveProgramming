#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int>adj[500001];
bool vis_1[500001], vis_2[500001];
int dis_1[500001], dis_2[500001];

void DFS_1(int src, int d)
{
    vis_1[src] = true;
    dis_1[src] = d;

    for(auto i: adj[src]){
        if(!vis_1[i]){
            DFS_1(i, dis_1[src]+1);
        }
    }
}

void DFS_2(int src, int d)
{
    vis_2[src] = true;
    dis_2[src] = d;

    for(auto i: adj[src]){
        if(!vis_2[i]){
            DFS_2(i, dis_2[src]+1);
        }
    }
}

int main() {
    fastio
	int t;
    cin >> t;

    while(t--){
        int n, q, a, b;
        cin >> n >> q;
        for(int i=1; i<n; i++){
            cin >>a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        while(q--){
            cin >> a >> b;

            DFS_1(a, 0);
            DFS_2(b, 0);
            int ans = 0;
            for(int i=1; i<=n; i++){
                ans += min(dis_1[i], dis_2[i]);
            }
            cout << ans << "\n";
            
            for(int i=0; i<=n;i++){
                vis_1[i] = vis_2[i] = false;
                dis_1[i] = dis_2[i] = 0;
            }

        }
        
        for(int i=0; i<=n;i++){
            adj[i].clear();
            vis_1[i] = vis_2[i] = false;
            dis_1[i] = dis_2[i] = 0;
        }
    }
	return 0;
}
