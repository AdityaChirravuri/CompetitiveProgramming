#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int l, r;
		string s;

		cin >> s >> l >> r;
		priority_queue<char>arr;
		for(int i=l; i<=r; i++){
			arr.push(s[i]);
		}

		for(int i=l; i<=r; i++){
			s[i] = arr.top();
			arr.pop();
		}

		cout << s << "\n";
	}

	return 0;
}
