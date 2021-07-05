#include <bits/stdc++.h>
using namespace std;

void Solve(long long int a, long long int b)
{
    long long int c = a^b;
    int count = 0;
    while(c){
        long long int rem =c%2;
        if(rem == 1)count++;
        c =c/2;
    }
    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t){
		long long int a, b;
		cin >> a >> b;
		Solve(a, b);
		t--;
	}

	return 0;
}
