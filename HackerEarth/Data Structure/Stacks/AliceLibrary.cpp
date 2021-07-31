#include<bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    fastio;
    string a;
    cin>>a;
    stack<int> s;
    for(int i=0; i<a.size();i++){
        if(a[i]=='/')s.push(i);
        else if(a[i]==92){
            int t=s.top();
            reverse(a.begin()+t+1,a.begin()+i);
            //cout << a << "\n";
            s.pop();
        }
 
    }
 
    for(int i=0; i<a.size();i++){
        if(isalpha(a[i]))cout<<a[i];
    }
 
    return 0;
}
