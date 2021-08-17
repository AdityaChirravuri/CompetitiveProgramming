#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	string a, b;
	cin >> a;
	cin >> b;
	int count = 0;
	for(int i=0; i<=n-1; i++){
		if(a[i] != b[i]){
			if(((a[i] == '1' && b[i] == '0') && (a[i+1] == '0'&&b[i+1] == '1'))||((a[i] == '0' && b[i] == '1') && (a[i+1] == '1' && b[i+1] == '0')))i++, count++;
			else count++;
		}
	}
	cout << count ;
	return 0;
}
