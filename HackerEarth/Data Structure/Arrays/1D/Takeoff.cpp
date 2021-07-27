#include <bits/stdc++.h>
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
int main()
{
    fastIO
 
    int t;
    cin  >> t;
 
    for(int i=0; i<t; i++){
        ll n, p, q, r;
        cin >> n >> p >> q >> r;
        vector<ll>arr(n+1, 0);
        for(ll i=1; i<=n; i++){
            if(i%p == 0){
                arr[i]++;
            }
 
            if(i%q == 0){
                arr[i]++;
            }
            
            if(i%r == 0){
                arr[i]++;
            }
        }
        ll count = 0;
        for(ll i=1; i<=n; i++){
            //cout << arr[i] << " ";
            if(arr[i] == 1)count++;
        }
        cout << count << "\n";
    }
 
 
    return 0;
}
