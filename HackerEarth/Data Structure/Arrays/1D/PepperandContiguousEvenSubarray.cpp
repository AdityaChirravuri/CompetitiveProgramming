#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
bool Check(vector<long int>arr)
{
    long int count = 0;
    for(auto i: arr){
        if(i%2 != 0){
            count++;
        }
    }
 
    if(count == arr.size())return false;
    return true;
}
 
void Solve(vector<long int>a)
{
    bool check = Check(a);
 
    if(!check)cout << "-1\n";
    else{
        long int max_count = -1;
        for(int i=0; i<a.size(); i++){
            long int count = 0;
            if(a[i]%2==0){
                for(int j=i; j<a.size(); j++){
                    if(a[j]%2 == 0)count++;
                    else break;
                }
            }
            max_count = max(max_count, count);
        }
        cout << max_count << "\n";
    }
}
 
int main()
{
    fastio;
    int t;
    cin >> t;
 
    while(t){
        long int n;
        cin >> n;
 
        vector<long int>arr;
        for(long int i=0; i<n; i++){
            long int temp;
            cin >> temp;
            arr.push_back(temp);
        }
 
        Solve(arr);
        t--;
    }
 
 
    return 0;
}
