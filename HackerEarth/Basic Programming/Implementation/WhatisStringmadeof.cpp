#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int >arr {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    string str;
    cin >> str;
    int sum = 0;
    for(char i: str){
        sum += arr[i-'0'];
    }

    cout << sum;

    return 0;
}
