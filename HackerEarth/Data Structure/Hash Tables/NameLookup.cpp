#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fastio;
    int n;
    cin >> n;
    map<long int, string>arr;
    for(int i=0; i<n; i++){
        long int rollNumber;
        string s;
        cin >> rollNumber >> s;
        arr[rollNumber] = s;
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        long int temp;
        cin >> temp;
        cout << arr[temp] << "\n";
    }

    return 0;
}
