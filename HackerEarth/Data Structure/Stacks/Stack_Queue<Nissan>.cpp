#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long int n, k, temp, sum = 0;
	cin >> n >> k;
	vector<long int>arr;
	for(int i=0; i<n; i++){
		cin >> temp;
		arr.push_back(temp);
	}
	
	vector<long int>prefix(n+1);
	prefix[0] = arr[0];
	for(int i=1; i<n; i++){
		prefix[i] = prefix[i-1]+arr[i];
	}
	long int ans = 0;
	for(int i=0; i<k; i++){
		temp = prefix[i] + prefix[n-1] - prefix[n-k+i];
		ans = max(ans, temp);
	}
 
	cout << ans;
 
	return 0;
}
