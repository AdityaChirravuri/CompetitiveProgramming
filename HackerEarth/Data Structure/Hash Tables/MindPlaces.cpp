#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    map<long int, pair<int, int>>arr;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            long int temp;
            cin >> temp;
            arr[temp] = {i, j};
        }
    }
 
    int q;
	cin >> q;
    for(int i=0; i<q; i++){
        long int temp;
        cin >> temp;
        if(arr.find(temp) == arr.end())cout << "-1 -1\n";
        else cout << arr[temp].first << " " << arr[temp].second << "\n";
    }
 
 
    return 0;
}
