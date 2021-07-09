#include<stdio.h>

int main()
{
    int i, j, patlu, moto, n;
    scanf("%d", &n);
    j = n;
    for(i=1; i<=n; i++){
        patlu = i;
        j = j - patlu;
        if(j<0){
            printf("patlu");
            break;
        }
        moto = 2*i;
        j = j - moto;
        if(j<0){
            printf("moto");
            break;
        }
    }
}
