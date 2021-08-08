#include <bits/stdc++.h>
using namespace std;
 
void Print(map<string, priority_queue<int>>arr)
{
    for(auto i: arr){
        cout << i.first << " : ";
 
        while(!i.second.empty()){
            cout << i.second.top() << " ";
            i.second.pop();
        }
        cout << "\n";
    }
}
 
void Sol(map<string, priority_queue<long int>>arr)
{
    long int max = LONG_MIN, count, sum;
    string s, maxstring;
    for(auto i: arr){
        sum = 0;
        s = i.first;
        count = 0;
        while(!i.second.empty()){
            if(count == 3)break;
            else {
                sum = sum + i.second.top();
                i.second.pop();
                count ++;
            }
        }
        if(max < sum){
            max = sum;
            maxstring = s;
        }else if(max == sum){
            if(maxstring > s)maxstring = s;
        }
    }
    cout << maxstring << " " << max << "\n\n"; 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        map<string, priority_queue<long int>>arr;
        while(n){
            string s;
            long int num;
            cin >> s >> num;
            arr[s].push(num);
            n--;
        }
        //Print(arr);
        Sol(arr);
        t--;
    }
    
 
    return 0;
}
