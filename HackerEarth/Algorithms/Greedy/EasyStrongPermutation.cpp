#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
 
int32_t main()
{
	int n;
	cin >> n;
 
	vector<int>arr(n);
	vector<int>ans(n);
	for(int i=0; i<n; i++)cin >> arr[i];
 
	sort(arr.begin(), arr.end());
	int j=0;
	for(int i=0; i<n; i++){
		if(i%2 == 0)ans[i] = arr[j], j++;
		else ans[i] = arr[n-j];
	}
	int sum = 0;
	for(int i=0; i<n; i++){
		//cout << ans[i] <<" ";
		sum = sum + abs(ans[i]-ans[(i+1)%n]);
	}
 
	cout << sum;
	return 0;
}
