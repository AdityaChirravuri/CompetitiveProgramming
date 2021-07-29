#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
 
	vector<int>arr;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
 
	for(int i=0; i<n-1; i++)
		arr[i+1] = arr[i+1]-arr[i];
 
	if(arr[n-1] == 0)
	cout << "YES";
	else cout << "NO";
 
	return 0;
}
