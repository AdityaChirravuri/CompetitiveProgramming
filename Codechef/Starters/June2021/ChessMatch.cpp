#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int sum = 180;
	    
	    sum  = sum + a;
	    sum = 2*sum;
	    sum = sum -(b+c);
	    cout << sum  << "\n";
	}
	return 0;
}
