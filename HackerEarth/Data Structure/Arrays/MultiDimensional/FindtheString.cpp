#include<iostream>
using namespace std;
 
int main(){
 
  int T,N,M;string s;
  int i,j,r,flag;
  char c;

  cin>>T;
  while(T--){
        cin>> N >>M;
 
        char a[N][M];
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                cin>>a[i][j];
            }
        }
 
        cin>>s;
        r=0;

        for(i=0;i<s.size();i++) {
            c=s[i];
            flag=1;
            for(j=0;j<M;j++){   
                if(c==a[r][j]){
                    flag=0;
                    a[r][j]=9;
                    break;
                }
            }
            if(flag==0){
                r+=1;
                r=r%N;
            }else if(flag==1&&j==M){
                cout<<"No"<<endl;
                break;
            }
        }
 
        if(i==s.size()&&flag!=1)cout<<"Yes\n";
    }
  
    return 0;
}
