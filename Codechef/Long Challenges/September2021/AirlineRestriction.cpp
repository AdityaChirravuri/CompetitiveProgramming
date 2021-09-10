#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d, e;
	    cin >> a >> b >> c >> d >> e;
	    
	    bool flag = false;
	    
	    if((a+b <= d && c <=e ) || (a+c <= d && b <= e) || (b+c) <= d && a<=e)flag = true;
	    else flag = false;
	    
	    if(flag)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
