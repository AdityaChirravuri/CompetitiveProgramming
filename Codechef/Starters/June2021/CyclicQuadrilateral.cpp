#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    if(a+c == b+d && (a+b+c+d == 360))cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
