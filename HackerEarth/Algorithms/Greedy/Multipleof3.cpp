#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
 
	while(t){
		string s, ans, m;
		cin >> s;
		long long int num = stoll(s, nullptr, 10);
		if(num%3 == 0)cout << s << "\n";
		else if(num%3 == 1){			
			m = "2" + s ;
			for(int i=1; i<=s.size(); i++){
				ans = s;
				ans.insert(i, "2");
				if(ans < m)m = ans;
			}
			cout << m << "\n";
		}else if(num%3 == 2){
			m = "1" + s;
			for(int i=1; i<=s.size(); i++){
				ans = s;
				ans.insert(i, "1");
				if(ans < m)m = ans;
			}
			cout << m << "\n";
		}
		
		t--;
	}
	return 0;
}
