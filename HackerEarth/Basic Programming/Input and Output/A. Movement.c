#include <stdio.h>

int main()
{
	int n, rem=0, sum =0;
	scanf("%d", &n);
	rem = n%5;
	if(rem>=1&& rem<=4)
        rem= 1;
	n /= 5;
	sum = rem + n;
	printf("%d", sum);
}
