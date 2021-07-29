#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
 
int main()
{
    fastio;
    int n, temp;
    list<int>arr, a;
    cin >> n;
 
    for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
 
    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }
 
    int time = 0;
    while(!arr.empty()){
        if(arr.front() == a.front()){
            arr.pop_front();
            a.pop_front();
            time++;
        }else{
            temp = arr.front();
            arr.pop_front();
            arr.push_back(temp);
            time++;
        }
    }
    cout << time;
    return 0;
}
