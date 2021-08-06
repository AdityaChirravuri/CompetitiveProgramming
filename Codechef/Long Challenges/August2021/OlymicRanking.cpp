#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int g1, s1, b1;
	    int g2, s2, b2;
	    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
	    int total1 = g1+s1+b1;
	    int total2 = g2+s2+b2;
	    
	    if(total1 > total2)cout << "1\n";
	    else if(total2>total1)cout <<"2\n";
	    else {
	        if(g1 > g2)cout << "1\n";
	        else if(g2>g1)cout << "2\n";
	        else {
	            if(s1 > s2)cout << "1\n";
	            else if(s2 > s1)cout << "2\n";
	            else {
	                if(b1 > b2)cout << "1\n";
	                else cout << "2\n";
	            }
	        }
	    }
	    
	}
	return 0;
}
