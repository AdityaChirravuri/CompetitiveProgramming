#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
struct Ghost{
    long int age, Trophy;
};
 
struct cmp{
    bool operator()(const Ghost a, const Ghost b)
    {
        if(a.Trophy == b.Trophy){
            return a.age < b.age;
        }
 
        return a.Trophy < b.Trophy;
    }
};
 
int main()
{
    fastio;
    long int n, m;
    cin >> n >> m;
    priority_queue<Ghost, vector<Ghost>, cmp>arr;
    map<long int, long int>mp;
    for(int i=0; i<n; i++){
        long int age ;
        cin >> age;
        mp[age]++;
        Ghost temp;
        temp.age = age;
        temp.Trophy = mp[age];
        arr.push(temp);
        cout << arr.top().age << " " << arr.top().Trophy << "\n";
        //arr.top();
    }
 
 
    return 0;
}
