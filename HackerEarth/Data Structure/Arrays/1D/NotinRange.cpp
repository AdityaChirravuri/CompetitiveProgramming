#include<bits/stdc++.h>
using namespace std;
 
int main() {
    
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;
 
   map<long int, long int>mp;
   for(long int i=0; i<=1000000; i++)mp[i]= 0;
 
 
   while(n--){
      long int l, r;
      cin >> l >> r;
      mp[l]++;
      mp[r+1]--;
   }
   long int temp = 0;
   long int sum =0;
   for(auto i: mp){
      temp += i.second;
      if(temp==0)sum += i.first;
   }
   cout << sum;
   return 0;
}
