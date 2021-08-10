#include <bits/stdc++.h>
using namespace std;
 
int compare(pair<char, int>a, pair<char, int>b)
{
	return (a.second > b.second ? b.second : a.second);
}
 
void Solve(string s)
{
	map<char, int>mp;
	mp['r'] = 0; mp['u'] = 0; mp['b'] = 0; mp['y'] = 0;
	string str = "";
	for(int i=0; i<s.size(); i++){
		if (s[i] == 'r' || s[i] == 'u' || s[i] == 'b' || s[i] == 'y')str += s[i];
	}
	for(int i=0; i<str.size(); i++){
		mp[str[i]] = mp[str[i]]+1;
	}
	
	int Min = INT_MAX;
	for(auto it: mp){
		Min = min(Min, it.second);
	}
	cout << Min << "\n";
}
 
int main()
{
	int t;
	cin >> t;
	while(t){
		string s;
		cin >> s;
		Solve(s);
		t--;
	}
 
	return 0;
}
