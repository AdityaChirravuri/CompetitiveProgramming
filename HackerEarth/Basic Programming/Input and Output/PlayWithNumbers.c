#include <stdio.h>
#include <math.h>

int main()
{
    long long n, q, l, r, i, a[10001], j;
    scanf("%lld %lld", &n, &q);
    a[0]= 0;
    for(i=1; i<=n; i++){
        long long val;
        scanf("%lld", &val);
        a[i] = val + a[i-1];
    }
    for(i=1; i<=q; i++){
        scanf("%lld %lld", &l, &r);
       /* long long sum=0;
        for(j=l; j<=r; j++)
        sum += a[j];
        sum /= (long long)h;
        int s = floor(sum);
        printf("%lld\n", s);*/
        double sum;
        long long h = r - l +1;
        sum = (double)((a[r] - a[l-1])/h);
        long long s = floor(sum);
        printf("%lld\n", s);
    }


    return 0;
}
