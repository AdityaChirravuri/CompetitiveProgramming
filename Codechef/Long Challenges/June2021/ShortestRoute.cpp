#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int  main() {
	fastio
	
	long int  t;
	cin >> t;
	
	while(t--){
        long int  n, m, temp;
        cin >> n >> m;
        vector<long int >arr(n);
        for(long int  i=0; i<n; i++)cin >> arr[i];
        
        vector<long int >ans(n);
	    ans[0] = 0;
	    for(long int i=1; i<n; i++){
	        if(arr[i] != 0)ans[i] = 0;
	        else ans[i] = LONG_MAX;
	    }
	    long int  right = -1;
	    for(long int  i=0; i<n; i++){
	        if(arr[i] == 1){
	            right = i;
	        }
	        
	        
	        if(right != -1){
	            if(arr[i] == 0)ans[i] = min(ans[i], i - right);
	        }
	    }
	    
	    long int  left = -1;
	    for(long int  i=n-1; i>=0; i--){
	        if(arr[i] == 2){
	            left = i;
	        }
	        
	        if(left != -1){
	            if(arr[i] == 0)ans[i] = min(ans[i], left - i);
	        }
	    }
	    
	    for(long int  i=0; i<n; i++)if(ans[i] == LONG_MAX)ans[i] = -1;
	    for(long int  i=0; i<m; i++){
	        cin >> temp;
	        cout << ans[temp-1] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}
