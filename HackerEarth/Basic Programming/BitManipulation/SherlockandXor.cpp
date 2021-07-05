#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while(t){
		int n;
		long int even, odd;
		cin >> n;
		even = odd = 0;
		for(int i=0; i<n; i++){
			long int temp;
			cin >> temp;
			if(temp%2 == 0)even++;
			else odd++;
		}
		cout << even*odd << "\n";
		t--;
	}

	return 0;
}
