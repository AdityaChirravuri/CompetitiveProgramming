#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;

	while(T--){
		int n, x, temp;
		cin >> n >> x;
		priority_queue<int, vector<int>, greater<int>>arr;
		for(int i=0; i<n; i++){
			cin >> temp;
			arr.push(temp);
		}
		int count = 0;
		while(x>0 && !arr.empty()){
			temp = arr.top();
			arr.pop();
			if(x> temp){
				count++;
				x = x - temp;
			}
		}

		cout << count << "\n";
	}

	return 0;
}
