#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>a, pair<char, int>b)
{
	if(a.second == b.second)return a.first > b.first;
	return a.second < b.second;
	 
}
 
void Solve(string str)
{
	map<char, int>mp;
	/*vector<char>alpha = {'a', 'b', 'c', 'd', 'e', 'f', 'g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y', 'z'};
 
	reverse(alpha.begin(), alpha.end());*/
	for(char i = 'a'; i<='z'; i++)
	mp[i] = 1;
 
	for(int i=0; i<str.size(); i++){
		mp[str[i]]++;
	}
 
	vector<pair<char, int>>arr;
 
	for(auto& it: mp){
		arr.push_back(it);
	}
 
	sort(arr.begin(), arr.end(), cmp);
	for(auto it: arr){
		cout << it.first << " ";
	}
 
	cout << "\n";
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
 
}
