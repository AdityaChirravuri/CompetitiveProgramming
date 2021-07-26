include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;	//,count = 0;
	cin >> n;
    vector<int> arr(n);
    double tot;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        tot += arr[i];
    }
 
    vector<pair<int,int>>v;
    double sum,this_avg,other_avg;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            this_avg = sum/(j-i+1);
            int sz = n-j+i-1;
            other_avg = (sz>0)? (tot-sum)/sz:0;
            if(this_avg > other_avg){
                v.push_back({i+1,j+1});
                //count++;
            }
        }
    }
 
    //cout<<count<<endl;
	cout << v.size() << "\n";
    sort(v.begin(),v.end());
 
    for(int i = 0; i<v.size(); i++){
 
        cout<<v[i].first<<" "<<v[i].second<<endl;
 
    }
	return 0;
}
