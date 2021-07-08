#include<stdio.h>

long long product(long long arr[], long long n);

int main()
{
	long long arr[1000], i, n;
	scanf("%lld", &n);
	for(i=0; i<n; i++)
	scanf("%lld", &arr[i]);

	printf("%lld", product(arr, n));
}

long long product(long long arr[], long long n)
{
	long long i, t = 1000000007;
	long long prod=1;
	for(i=0; i<n; i++)
	prod = (prod *arr[i])%t;
	return prod;
}
