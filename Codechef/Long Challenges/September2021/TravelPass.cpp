#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, a, b;
	    cin >> n >> a >> b;
	    string s;
	    cin >> s;
	    int c0, c1;
	    c0 = c1 = 0;
	    for(int i=0; i<s.size(); i++){
	        if(s[i] == '0')c0++;
	        else c1++;
	    }
	    
	    cout << a*c0 + b*c1 << "\n";
	}
	return 0;
}
