#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
vector<int> parent[100001];
vector<int>del(100001, 0);
bool visited[100001] { };
int c = 0;
 
void DFS(int i)
{
    stack<int>S;
    visited[i] =1;
    S.push(i);
 
    if(i == del[i]){
        cout << "1";
        return;
    }
 
    while(!S.empty()){
        int top = S.top();
        S.pop();
 
        for(int j: parent[top]){
            if(visited[j] == 0){
                visited[j] = 1;
                if(del[j] == j)c++;
                else S.push(j);
            }
        }
    }
 
    cout << c;
}
 
int main()
{
    fastio;
    int m, n, temp;;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> temp;
        if(temp==-1)parent[0].push_back(i);
        else parent[temp].push_back(i);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> temp;
        del[temp] = temp;
    }
 
    DFS(1);
 
    return 0;
}
