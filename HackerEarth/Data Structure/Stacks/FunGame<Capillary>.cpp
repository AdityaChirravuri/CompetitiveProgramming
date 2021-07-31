#include<bits/stdc++.h>
using namespace std;
 
vector<int> funGame (vector<int> arr) {
   vector<int>sol;
 
   int i =0;
   int j = arr.size()-1;
   while(j>=0&&i<arr.size()){
      if(arr[i]>arr[j]){
         j--;
         sol.push_back(1);
      }else if (arr[i] < arr[j]){
         i++;
         sol.push_back(2);
      }else {
         i++;
         j--;
         sol.push_back(0);
      }
 
   }
 
 
   return sol;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }
 
    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}
