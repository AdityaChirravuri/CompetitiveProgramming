#include <stdio.h>
void magic(int a[], int n);
int main()
{
    int n, i, a[100001];
    //printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    //printf("ENTER ARRAY ELEMENTS: \n");
    for(i=0; i<=n; i++)
        scanf("%d", &a[i]);
     magic(a, n);

    return 0;
}

void magic(int a[], int n)
{
    int i, j=-1, min = 9999999, sum=0;
    for(i=0; i<n; i++)
        sum += a[i];
    for(i=n-1; i>0; i--){
        if((sum-a[i])%7==0&&a[i]<min)
            min= a[i];
            j =i;
    }
    printf("%d", j);
}
