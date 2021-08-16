#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	set<string>arr;
	vector<string>ar;
	for(int i=0; i<t; i++){
		string a;
		cin >> a;
		arr.insert(a);
		ar.push_back(a);
	}

	set<string>::iterator it;
	for(int i=0; i<ar.size(); i++){
		string s = ar[i];
		reverse(s.begin(), s.end());
		it = arr.find(s);
		if(it!=arr.end())break;
	}

	string s = *it;
	cout << s.length() << " " << s[s.length()/2];
	
	return 0;
}
