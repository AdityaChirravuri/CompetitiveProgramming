#include <bits/stdc++.h>
using namespace std;
 
void Solve(vector<string>arr)
{
    //for(string s: arr)cout << s << endl;
    int n = arr.size();
    bool flag1, flag2;
        flag1 = true;
        //y - axis 
        for(int i=0; i<n; i++){
            for(int j=0; j<arr[i].length(); j++){
                if(arr[i][j] != arr[i][arr[i].length()-j-1]){
                    flag1 = false;
                    break;
                }
            }
        }
        flag2 = true;
        for(int i=0; i<n/2; i++){
            for(int j=0; j<arr[i].length(); j++){
                if(arr[i][j] != arr[n-i-1][j]){
                    flag2 = false;
                    break;
                }
            }
        }
 
        if(flag2 && flag1)cout << "YES\n";
        else cout << "NO\n";
/*
    if(flag1 && flag2)cout << "YES\n";
    else cout << "NO\n";
*/
}
 
int main()
{
	int t;
	cin >> t;
 
	while(t){
		int n;
		cin >> n;
		vector<string>arr;
		for(int i=0; i<n; i++){
			string str;
			cin >> str;
			arr.push_back(str);
		}
        //for(string s: arr)cout << s << endl;
        Solve(arr);
		t--;
	}
 
	return 0;
}
