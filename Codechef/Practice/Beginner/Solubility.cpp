#include <iostream>
using namespace std;

#define ll long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
	fastIO
	
	ll t;
	ll x, a, b;
	cin >> t;
	while(t--){
	    cin >> x >> a >> b;
	     a = a + (100-x)*b;
	     a = a* 10;
	     cout << a << "\n";
	}
	return 0;
}
