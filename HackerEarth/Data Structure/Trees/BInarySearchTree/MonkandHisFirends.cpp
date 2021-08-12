#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
	fastio
    int t;
    cin >> t;
 
    while(t--){
        map<long int, long int>mp;
        long int n, m, temp;
        cin >> n >> m;
 
        for(long int i=0; i<n; i++){
            cin >> temp;
            mp[temp]++;
        }
 
        for(long int i=0; i<m; i++){
            cin >> temp;
            if(mp.find(temp) == mp.end()){
				cout << "NO\n";
				mp[temp]++;
			}
            else cout << "YES\n";
        }
    }
 
    return 0;
}
