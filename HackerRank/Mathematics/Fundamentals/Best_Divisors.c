#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum(int n);         // a function to find the sum of the digits of the number
void Find(int n);        // a function to find the divisors of the number

int main()
{
    int n;
    scanf("%d", &n);
    Find(n);

    return 0;
}

void Find(int n)
{
    int i, s1, s2, max;
    int Tmax = -1;
    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
                printf("%d %d\n", i, n/i);
            s1 = sum(i);
            s2 = sum(n/i);
        }
        max = s1>s2 ? s1 : s2;
        if(Tmax < max)Tmax = max;
    }
    printf("%d\n", Tmax);
}

int sum(int n)
{
    int rem, Sum=0;
    while(n!=0){
        rem = n %10;
        Sum = Sum + rem;
        n = n/10;
    }

    return Sum;
}
