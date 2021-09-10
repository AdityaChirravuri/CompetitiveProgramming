#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int n;
	   cin >> n;
	   
	   vector<int>arr(n);
	   for(int i=0; i<n; i++)cin >> arr[i];
	   int o, e;
	   o = e = 0;
	   for(int i=0; i<n; i++){
	       if((i+1+arr[i])%2 == 0){
	           if(arr[i]%2 == 0)e++;
	           else o++;
	       }
	   }
	   
	    int ans = abs(e-o);
	    ans = n - ans;
	    cout << ans << "\n";
	}
	return 0;
}
