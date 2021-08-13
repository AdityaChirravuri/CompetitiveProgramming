#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, find, index;
	cin >> n >> find;

	vector<int>arr(n);
	for(int i=0 ;i<n; i++)cin >> arr[i];

	for(int i=0; i<n; i++){
		if(arr[i] == find)index = i;
	}

	cout << index+1;
	return 0;
}
