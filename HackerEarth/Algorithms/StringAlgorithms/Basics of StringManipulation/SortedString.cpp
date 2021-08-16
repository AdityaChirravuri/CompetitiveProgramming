#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<char, int>&a, const pair<char, int>&b){
    if(a.second < b.second)return true;
    else if(a.second == b.second){
        if(a.first > b.first)return false;
        else return true;
    }
    return false;
}

int main()
{
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		vector<pair<char, int>>arr(26);
		for(int i=0; i<26; i++){
			arr[i].first = i + 97;
			arr[i].second = 0;
		}
        
        for(int i=0; i<s.length(); i++){
            arr[s[i] - 97].second++;
        }
        
        sort(arr.begin(), arr.end(), cmp);
        //cout << "\nAfter: \n";
        string st = "";
        for(auto i: arr){
            if(i.second != 0){
                while(i.second){
                    st = st + i.first; 
                    i.second--;
                }
            }
        }
        cout << st << '\n';
	}

	return 0;
}
