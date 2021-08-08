#include <bits/stdc++.h>
using namespace std;
 
void Solve(string a, string b)
{
	map<char, int>s;
 
	for(int i=0; i<a.size(); i++){
		s[a[i]]++;
	}
 
	for(int i=0; i<b.size(); i++){
		if(s[b[i]] == 0)s[b[i]] = -1;
		else s[b[i]] = s[b[i]] - 1;
	}
	int sum = 0;
	for(map<char, int>::iterator it=s.begin(); it!=s.end(); it++){
		sum = sum + abs(it->second);
	}
	cout << sum << "\n";
}
 
int main()
{
	int t;
	cin >> t;
	while(t){
		string s, i;
		cin >> s;
		cin >> i;
		Solve(s, i);
		t--;
	}
 
	return 0;
}
