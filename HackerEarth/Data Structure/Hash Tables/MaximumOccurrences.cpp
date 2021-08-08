#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
	string s;
	getline(cin, s);
 
	map<char, int>mp;
	map<char, int>::iterator it;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
 
 
	pair<char, int>S = make_pair(' ', 0);
 
	for(it=mp.begin(); it!=mp.end(); it++){
		//cout << it->first << " " << it->second << endl;
		if(it->second > S.second){
			S.first = it->first;
			S.second = it->second;
		}else if(it->second == S.second){
			if(S.first > it->first)S.first = it->first;
		}
	}
 
	cout << S.first << " " << S.second;
 
	return 0;
}
