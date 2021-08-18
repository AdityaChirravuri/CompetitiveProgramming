#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        string s, ans;
        cin >> s;
        stack<char>st;
        ans = s[0];
        st.push(s[0]);
        for(int i=1; i<s.length(); i++){
            if(s[i] != st.top()){
                ans = ans + s[i];
                st.pop();
            }
            st.push(s[i]);
        }
        
        cout << ans << "\n";
    }
}
