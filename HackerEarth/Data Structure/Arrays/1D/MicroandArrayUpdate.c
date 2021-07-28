#include<stdio.h>
 
int swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++){
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
int time(int a[], int k, int n)
{
    int i, time = 0;
    //quickSort(a, 0, n-1);
    if(a[0]<=k){
        while(a[0]!=k){
        time++;
        a[0]++;
        }
    }
 
    return time;
}
 
int main()
{
    int T, n, k, i, j, a[100001];
    scanf("%d", &T);                    // T is number of test cases
    for(i=0; i<T; i++){
        scanf("%d %d", &n, &k);            // n is the size of the array and k is  the minimum value
        for(j=0; j<n; j++)
        scanf("%d", &a[j]);
    //sort(a, k);
    quickSort(a, 0, n-1);
    printf("%d\n", time(a, k, n));
    }
    return 0;
 
}
