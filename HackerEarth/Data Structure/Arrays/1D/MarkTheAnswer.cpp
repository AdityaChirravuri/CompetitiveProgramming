#include <iostream>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
 
int main()
{
    long int n, x;
    cin >> n >> x;
    long int arr[n];
    for(long int i=0; i<n; i++){
        cin >> arr[i];
    }
    long int count = 0, ans = 0;
    for(long int i=0; i<n; i++){
        if(arr[i] > x){
            count++;
            if(count == 2)break;
        }else {
            //cout << arr[i] << "\n";
            ans++;
        }
    }
    cout << ans;
 
    return 0;
}
