#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, s = 0, temp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        s += temp;
    }
 
    if(s == 2*n - 2)cout << "Yes\n";
    else cout << "No\n";
 
	return 0;
}
