#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int T;
    cin >> T;
    
    while(T--) {
        ll n, m;
        cin>>n>>m;
        vector<pair<int,int>>arr;
        for (int i=0; i < m; i++){
            ll x, y;
            cin>>x>>y;
            arr.push_back({x,y});
        }
        
        sort(arr.begin(), arr.end(), greater<pair<int,int>>());
    
        ll lcm=1;
        ll rem=n;
        ll res=0;
        int i=0;
        while(rem > 0 && i<m){
            ll a= vp[i].first,b=vp[i].second;
            lcm = lcm*b/__gcd(lcm,b);
            res += (rem-n/lcm)*a;
            rem = n/lcm;
            i++;
        }

        cout << res << "\n";
    }

    return 0;
}
