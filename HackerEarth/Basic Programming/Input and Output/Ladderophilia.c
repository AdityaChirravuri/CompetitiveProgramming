#include <stdio.h>
void mat();

int main()
{
    int i, j, n, k;
    scanf("%d", &n);
    while(n!=0){
    mat();
    printf("*****");
    printf("\n");
    n--;
    }
    mat();
    return 0;
}
void mat()
{
    int i, j;
    for(i=1; i<3; i++){
        for(j=1; j<6; j++){
            if(j==1 || j==5)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
