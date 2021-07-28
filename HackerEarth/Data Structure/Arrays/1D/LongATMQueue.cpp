#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
 
int main()
{
    fastio;
    long int n;
    cin >> n;
 
    long int arr[n];
 
    for(long int i=0; i<n; i++)cin >> arr[i];
 
    long int groups = 0;
	bool flag ;//= true;
    for(int i=0; i<n-1; i++){
        if(arr[i] <= arr[i+1]){
            // cout << arr[i] << " " << arr[i+1] << "\n";
			flag = false;
        }
        else {
			groups++;
			flag = true;
		}
    }
	//if(!flag)groups++;
	groups++;
    cout << groups ;
 
    return 0;
}
