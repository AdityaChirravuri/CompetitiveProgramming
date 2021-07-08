#include<stdio.h>
#include<math.h>

int main()
{
    int i, l, r, k;
    int sum = 0, sum_1=0;
   // printf("enter two number : \n");
    scanf("%d %d", &l, &r);
    //printf("enter the divisor : \n");
    scanf("%d", &k);
   for(i=l; i<=r; i++){
		if(i%k ==0 )
		sum=sum+1;
	}
    printf("%d", abs(sum));
}
