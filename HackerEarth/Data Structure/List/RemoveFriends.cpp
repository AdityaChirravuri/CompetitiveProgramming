#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){

        int n,k, i;
        cin >> n >> k;

        deque<int> s;
        vector<int> arr(n);

        for(i = 0;i<n;i++)cin>>arr[i];

        int count1 = 0;
    
        for(i = 0;i<n;i++){
            if(s.empty() || s.back()>arr[i])s.push_back(arr[i]);
            else{
                while(!s.empty() && (count1 != k) && s.back()<arr[i] ){
                    s.pop_back();
                    count1++;
                }

                s.push_back(arr[i]);
                if(count1 == k){
                    i++;
                    for(;i<n;i++)s.push_back(arr[i]);
                }
            }

        }

        while(!s.empty()){
            //int jas = s.front();
            cout << s.front() << " ";
            s.pop_front();
        }

        cout << "\n";

    }
    return 0;
}
