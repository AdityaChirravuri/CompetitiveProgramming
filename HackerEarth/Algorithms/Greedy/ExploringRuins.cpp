#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
 
	for(int i=0; i<=s.length()-1; i++){
		if(s[i] == 'a' && s[i+1] == '?')s[i+1] = 'b';
		else if(s[i] == '?' && s[i+1] == 'a')s[i] = 'b';
	}
 
	for(int i=0; i<s.length(); i++){
		string a, b; 
		a = b = s;
		if(s[i] == '?'){
			a[i] = 'a';
			b[i] = 'b';
			s = min(a, b);
		}
	}
 
	for(int i=0; i<=s.length()-1; i++){
		if(s[i] == 'a' && s[i+1] == 'a')s[i+1] = 'b';
	}
	cout << s;
	return 0;
}
