#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int 
#define M 1000000007

ll BinPow(ll a, ll b)
{
    ll res = 1;
    
    while(b> 0 ){
        if(b&1)res = (res*a)&M;
        a = (a*a)%M;
        b>>=1;
    }
    return res;
}

int Power(ll x, unsigned int y, int p)
{
    int res = 1;
    x = x%p;
    if(x == 0)return 0;
    
    while(y>0){
        if(y&1)res = (res*x)%p;
            y = y >> 1;
            x = (x*x)%p;
    }
    
    return res;
}

int main() {
    fastio
	int t;
	cin >> t;
	
	while(t--){
	    ll n, m;
	    cin >> n >> m;
	    
	    ll temp = BinPow(2, n)-1;
	    ll ans = Power(temp, m, M);
	    cout << ans << "\n";
	}
	
	return 0;
}
