#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int len;
	cin >> len;
 
	string s, t;
	cin >> s;
	cin >> t;
	int count = 0;
	int shift = 0;
	for(int i=0; i<len; i++){
		if(s[i] != t[i]){
			count++;
			if(i == len-1)shift = shift +1;
		}else {
			if(count > 0){
				count = 0;
				shift = shift + 1;
			}
		}
	}
	cout << shift;
	return 0;
}
