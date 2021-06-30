#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long>a(n);
    for(int i=0; i<n; i++)cin >> a[i];
    
    while(q--){
        long long t;
        cin >> t;
        if(t == 1){
            long long l, r, x;
            cin >> l >> r >> x;
            for(int j=l-1; j<r; j++)a[j] = a[j] + ((x+j+1-l)*(x+j+1-l));
        }
        
        if(t == 2){
            long long v;
            cin >> v;
            cout << a[v-1] << "\n";
        }
    }
    
    return 0;
}
