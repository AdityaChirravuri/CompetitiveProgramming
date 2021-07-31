#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int res=0;
 
    while(n>0){
        res = res +(n%10);
        n=n/10;
    }
 
    return res;
}
 
int main(){
 
    int n,q,idx,temp;
    cin>>n>>q;
 
    vector<int> v(n);
 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
 
    for(int i=0;i<q;i++){
        int flag=0;
        cin>>idx;
        temp = v[idx-1];
        for(int j=idx; j<v.size(); j++){
            if( v[j]>temp && sum(temp) > sum(v[j])){
                cout<<j+1<<endl;
                flag=1;
                break;
            }
        }
 
        if(flag==0){
            cout<<-1<<endl;
        }
    }
 
    return 0;
}
