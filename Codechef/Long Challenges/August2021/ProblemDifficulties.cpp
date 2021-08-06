#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int temp;
	    
	    set<int>s;
	    vector<int>arr;
	    for(int i=0; i<4; i++){
	        cin >> temp;
	        arr.push_back(temp);
	        s.insert(temp);
	    }
	    if(s.size() == 4)cout << "2\n";
	    else if(s.size() == 3)cout << "2\n";
	    else if(s.size() ==2){
	        //sort(arr.begin(), arr.end());
	        int a = *s.begin();
	        if(count(arr.begin(), arr.end(), a) == 2)cout << "2\n";
	        else cout << "1\n";
	    }else if(s.size() == 1)cout << "0\n";
	}
	return 0;
}
