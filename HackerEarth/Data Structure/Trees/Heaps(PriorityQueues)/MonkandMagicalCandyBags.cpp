#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
 
int main()
{
    fastio;
    int t;
    cin >> t;
    while(t){
        int n, k;
        priority_queue<long int>arr;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            long int temp;
            cin >> temp;
            arr.push(temp);
        }
        long int sum=0;
        while(k--){
            long int temp = arr.top();
            arr.pop();
            sum += temp;
            temp = floor(temp/2);
            arr.push(temp);
        }
        cout << sum << "\n";
        t--;
    }
 
 
    return 0;
}
