#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
 
    cin.tie(NULL);
 
    int n;
 
    cin>>n;
 
    string s;
 
    cin>>s;
 
    map<char,int>m;
 
    for(int i = 0; i<n; i++){
 
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
 
            m[s[i]]++;
 
        }
 
    }
 
    int c = 0;
 
    for(auto it:m){
 
        // cout<<it.second<<endl;
 
        if(it.second>0){
 
            c++;
 
            // cout<<c<<endl;
 
        }
 
    }
 
    if(c<5){
 
        cout<<"NO"<<endl;
 
    }
 
    else{
 
        cout<<"YES"<<endl;
 
    }
 
    return 0;
 
}
