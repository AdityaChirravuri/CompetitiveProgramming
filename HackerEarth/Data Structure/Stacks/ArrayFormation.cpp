#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
bool isPrime(long int val)
{
   if(val <= 1)return false;
 
   for(long int i=2; i<=sqrt(val); i++){
      if(val%i == 0)return false;
   }
 
   return true;
}
 
 
int main()
{
    fastio;
    long int n;
    queue<long int>arr;
    queue<long int>prime;
    stack<long int>composite;
    cin >> n;
 
    for(int i=0; i<n; i++){
        long int temp;
        cin >> temp;
        arr.push(temp);
    }
 
    while(!arr.empty()){
        long int val = arr.front();
        if(isPrime(val))prime.push(val);
        else composite.push(val);
        arr.pop();
    }
 
    while(!prime.empty()){
        cout << prime.front() << " ";
        prime.pop();
    }
    cout << "\n";
    while(!composite.empty()){
        cout << composite.top() << " ";
        composite.pop();
    }
 
 
    return 0;
}
