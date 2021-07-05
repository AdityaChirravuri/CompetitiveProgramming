#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t){
        long long int a, b;
        cin >> a >> b;
        
		if(b-a == (long long)1)cout << (a&b) << "\n";
		else cout << max(b&(b-1), (b-1)&(b-2)) << "\n";

        t--;
    }

    return 0;
}
