#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    map<string, int>arr;
	    for(int i=0; i<3*n; i++){
	        string s;
	        int j;
	        cin >> s >> j;
	        arr[s] += j;
	    }
	    
	    vector<pair<string, int>>a;
	    for(auto& it: arr){
	        a.push_back(it);
	    }
	    
	    sort(a.begin(), a.end(), cmp);
	    for(auto i: a){
	        cout << i.second << " ";
	    }
	    cout << "\n";
	}
	return 0;
}
