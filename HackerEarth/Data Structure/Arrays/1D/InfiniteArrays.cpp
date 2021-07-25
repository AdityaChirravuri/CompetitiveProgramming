#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
 
vector<long long> solve (vector<int> A, vector<long long int> R, vector<long long int> L) {
   // write your code here
   long long n = A.size(), m = L.size();
    vector <long long> ans(m);
    vector <long long> sum(n+1);
    sum[0] = 0;
 
    for(long long i = 0; i < n; i++){
        sum[i+1] = (sum[i] + A[i]) % mod;
    }
 
    long long temp;
    for(long long i = 0; i < m; i++){
        L[i]--;
        temp = (sum[R[i] % n] - sum[L[i] % n] + ((sum[n] * ((R[i]/n - L[i]/n) % mod)))) % mod ;
        ans[i] = temp;
 
    }
 
    return ans;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }
        int Q;
        cin >> Q;
        vector<long long int> L(Q);
        for(int i_L=0; i_L<Q; i_L++)
        {
        	cin >> L[i_L];
        }
        vector<long long int> R(Q);
        for(int i_R=0; i_R<Q; i_R++)
        {
        	cin >> R[i_R];
        }
 
        vector<long long> out_;
        out_ = solve(A, R, L);
        cout << out_[0];
        for(int i_out_=1; i_out_<out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}
