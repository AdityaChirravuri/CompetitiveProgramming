#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t){
		int n,k;
		string s;
		cin >> n >> k;
        map<int, int>mp;
        while(n){
            cin >> s;
		    mp[s.size()]++;
            n--;
        }
        bool flag = true;
		    for(auto it: mp){
			    if(it.second%k != 0){
				    flag = false;
				    break;
			    }
		    }
		    if(flag)cout << "Possible\n";
		    else cout << "Not possible\n";
		t--;
	}
	return 0;
}
