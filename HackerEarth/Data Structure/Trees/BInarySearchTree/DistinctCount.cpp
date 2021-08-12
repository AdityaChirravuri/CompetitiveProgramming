#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
    fastio;
    int t;
    cin >> t;
 
    while(t){
        int n, x, temp;
        cin >> n >> x;
        set<int>arr;
        for(int i=0; i<n; i++){
            cin >> temp;
            arr.insert(temp);
        }
 
        if(arr.size() == x)cout << "Good\n";
        else if(arr.size() < x) cout << "Bad\n";
        else cout << "Average\n";
 
        t--;
    }
 
 
 
    return 0;
}
