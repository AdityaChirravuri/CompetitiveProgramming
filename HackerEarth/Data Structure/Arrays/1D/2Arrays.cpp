#include <iostream>
using namespace std;
 
int main()
{
    int size;
    int count1 = 0; int count2 = 0;
    int sum1 = 0; int sum2 = 0;
 
    cin >> size;
 
    int arr1[size];
    int arr2[size];
 
    for(int i = 0; i < size; i++){
        cin >> arr1[i];
 
        if(arr1[i] == -1) count1++;
        else sum1 = sum1 + arr1[i];
 
    }
 
    for(int j = 0; j < size; j++){
        cin >> arr2[j];
        if(arr2[j] == -1)count2++;
        else sum2 = sum2 + arr2[j];
    }
 
    if((count1 == 1 && count2 == 0 && sum2 > sum1) || (count1 == 0 && count2 == 1 && sum1 > sum2)) cout << "1";
    else if((count1 == 1 && count2 == 0 && sum2 < sum1) || (count1 == 0 && count2 == 1 && sum1 < sum2)) cout << "0";
    else if(count1 > 0 && count2 > 0)cout << "Infinite";
    else if((count1 == 2 && count2 == 0 && sum2 > sum1))cout << (sum2 - sum1) + 1 ;
    else if((count1 == 0 && count2 == 2 && sum1 > sum2))cout << (sum1 - sum2) + 1 ;
    else if((count1 == 2 && count2 == 0 && sum2 < sum1) || (count1 == 0 && count2 == 2 && sum1 < sum2)) cout << "0";
 
    return 0;
}
