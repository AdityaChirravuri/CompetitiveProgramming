#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{ 
	fastio;
    int n;
    cin >> n;
    long long int square[1000001] = {0};
    long long int arr[n];
 
    for(int i=0; i<n; i++)cin >> arr[i];
 
    for(int i = 1; i<=1000000; i++)square[i] = i*i;
    long long int count = 0, sum;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            float x = sqrt(sum);
            long long int y = sqrt(sum);
            if(square[y] == sum && x == y)count++;
        }
    }
    cout << count;  
 
    return 0;
}
