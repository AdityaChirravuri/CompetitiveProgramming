#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t){
        int n, z, max;
        cin >> z >> n;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            z = z&temp;
        }

        if(z)cout << "No\n";
        else cout << "Yes\n";

        t--;
    }
}
