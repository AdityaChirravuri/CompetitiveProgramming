#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;	
		int count = 0;
		while(n>0){
			int rem = n%2;
			if(rem == 1)count++;
			n = n/2;
		}
		cout << count << "\n";
	}

	return 0;
}
