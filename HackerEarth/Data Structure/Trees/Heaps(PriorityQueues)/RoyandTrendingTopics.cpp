#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
class Score{
    public:
    ll Id;
    ll z;
    ll change;
    ll total_score = 0;
};
 
class cmp{
    public:
    bool operator()(Score const& a, Score const& b){
        if(a.change == b.change){
            return a.Id < b.Id;
        }
        return a.change < b.change;
    }
};
 
 
int main()
{
    fastio;
    ll n;
    cin >> n;
    ll id, z, post, like, comment, share;
    Score temp;
    priority_queue<Score, vector<Score>, cmp>arr;
    for(int i=0; i<n; i++){
        cin >> id >> z >> post >> like >> comment >> share;
        temp.Id = id;
        temp.total_score = (post*50 + like*5 + comment*10 + share*20);
        temp.z = z;
        temp.change = temp.total_score - temp.z;
        arr.push(temp);
    }
    int count = 0;
    while(!arr.empty() && count < 5){
        Score temp = arr.top();
        //cout << temp.Id << " " << temp.change << " " << temp.z << " " << temp.total_score << "\n";
        cout << temp.Id << " " << temp.total_score << "\n";
        arr.pop();
        count++;
    }
 
    return 0;
}
