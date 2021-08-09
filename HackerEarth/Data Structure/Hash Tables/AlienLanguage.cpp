#include <bits/stdc++.h>
using namespace std;
 
bool Solve(string a, string b)
{
    map<char, int>mp;
 
	int flag = true;
 
	for(char t: b)
	mp[t]++;
 
	for(int i=0; i<a.length(); i++){
		if(mp.find(a[i])!=mp.end()){
			flag = false;
			break;
		}
	}
	return !flag;
}
 
int main()
{
    int t;
    cin >> t;
 
    while(t){
        string Str, subStr;
        cin >> Str;
        cin >> subStr;
        if(Solve(Str, subStr))cout << "YES\n";
        else cout << "NO\n";
        t--;
    }
	return 0;
}
