#include <bits/stdc++.h>
using namespace std;

class cmp{
    public:
    bool operator()(pair<int, int>&a, pair<int, int>&b){
        return a.first > b.first;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--){
        int l = 0, count = 0, r, m;
        cin >> m;

        vector<pair<pair<int, int>, int>>arr;
        vector<int>ans;
        for(int i=0; i<m; i++){
            int x;
            cin >> x;
            ans.push_back(x);
        }

        for(int i=0; i<m; i++){
            int x;
            cin >> x;
            if(ans[i] <= x){
                arr.push_back({{ans[i], x}, i+1});
            }
        }
        ans.clear();
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i].first.first > arr[i].first.second)continue;
            if(i == 0){
                r = arr[i].first.first;
                ans.push_back(arr[i].second);
                ans.push_back(l);
                ans.push_back(r);
                l = r;
                count++;
                continue;
            }

            if(arr[i].first.second-l >= arr[i].first.first){
                r = arr[i].first.first + l;
                ans.push_back(arr[i].second);
                ans.push_back(l);
                ans.push_back(r);
                l = r;
                count++;
            }
        }

        cout << count << "\n";
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
            if((i+1)%3 == 0)cout << "\n";
        }
    }

    return 0;
}
