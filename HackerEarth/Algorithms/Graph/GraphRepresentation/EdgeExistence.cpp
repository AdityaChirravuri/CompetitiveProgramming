#include <bits/stdc++.h>
using namespace std;

#define Size 1001
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fastio;

    int arr[Size][Size];
    int n, m, q;
    cin >> n >> m;

    for(int i=1; i<Size; i++){
        for(int j=1; j<Size; j++){
            arr[i][j] = 0;
        }
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
	cin >> q;
    for(int i=0 ;i<q; i++){
        int a, b;
        cin >>a >> b;
        if(arr[a][b] == 1)cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}
