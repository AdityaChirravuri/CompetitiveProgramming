#include <iostream>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define for_loop(n) for(long int i=0; i<n; i++)
 
int main()
{
    fastio;
    long int t;
    cin >> t;
    
    for_loop(t){
        long int n;
        cin >> n;
        long int arr[n];
        for_loop(n){
            cin >> arr[i];
        }
        long int count = 0;
        for_loop(n-1){
            //cout << arr[i] << "\n";
            if(arr[i] < arr[i+1]){
                //cout << "Count: " << arr[i] << " " << arr[i+1] << "\n";
                arr[i+1] = arr[i];
                count++;
            }
        }
 
        //cout << n << " " << n-count << "\n";
        cout << n-count << "\n";
    }
    
 
    return 0;
}
