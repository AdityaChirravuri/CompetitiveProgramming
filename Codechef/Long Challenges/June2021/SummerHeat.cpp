#include <iostream>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

int main() {
    fastio;
	ll t;
	cin >> t;
	while(t){
	    ll a, b, xa, xb;
	    cin >> a >> b >> xa >> xb;
	    cout << (xa/a) + (xb/b) << "\n";
	    t--;
	}
	return 0;
}
