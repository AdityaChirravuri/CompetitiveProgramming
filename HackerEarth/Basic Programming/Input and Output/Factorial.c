#include<stdio.h>

int main()
{
	int i, n, prod=1;
	scanf("%d", &n);
	for(i=1; i<n+1; i++){
		prod = prod *i;
	}
	printf("%d", prod);
}
