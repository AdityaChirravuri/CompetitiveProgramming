#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	long int sum = 0, max_sum = INT_MIN;
	vector<long int>arr;
	set<long int>a;
	cin >> n;
 
	for(int i=0; i<n; i++){
		long int temp;
		cin >> temp;
		arr.push_back(temp);
        sum = max(sum+temp, temp);
        max_sum = max(sum, max_sum);
        a.insert(max_sum);
	}
 
	for(int i=1; i<n; i++){
            a.insert(arr[i]);
            sum = max_sum = arr[i];
		for(int j=i+1; j<n; j++){
			sum = max(sum + arr[j], arr[j]);
 
            max_sum = max(max_sum, sum);
 
			a.insert(max_sum);
		}
	}
	sum = 0;
	for(auto it=a.begin(); it!=a.end(); it++){
        sum += *it;
	}
 
	cout << sum;
 
	return 0;
}
