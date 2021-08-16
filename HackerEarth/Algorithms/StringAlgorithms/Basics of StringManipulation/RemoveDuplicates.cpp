#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	unordered_set<char>a;
	for(int i=0; i<s.length(); i++){
		a.insert(s[i]);
	}

	for(int i=0; i<s.length(); i++){
		if(a.find(s[i]) != a.end()){
			cout << s[i];
			a.erase(s[i]);
		}
	}
	return 0;
}
