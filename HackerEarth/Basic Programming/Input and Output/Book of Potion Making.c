#include <stdio.h>
int digit(int n);
void potion(int n);

int main()
{
    long long n;
    //printf("ENTER A NUMBER: ");
    scanf("%lld", &n);
    /*printf("%d", digit(n));
    printf("\n%lld", n);*/
    if(digit(n)==0)
        printf("Illegal ISBN");
    else potion(n);
    return 0;
}
int digit(int n)
{
    int digit=0;
    while(n!=0){
        n = n/10;
        digit++;
    }
    if(digit==10)
        return 1;
    else return 0;
}

void potion(int n)
{
    int rem, i=10, sum=0;
    while(n!=0&&i!=0){
        rem= n%10;
        sum += i*rem;
        n /=10;
        i--;
    }
    if(sum%11==0)
        printf("Legal ISBN");
    else printf("Illegal ISBN");
}
