#include<stdio.h>

int main()
{
    int n, L, W[1000], H[1000], i;
    //printf("ENTER MINMUM LENGTH: ");
    scanf("%d", &L);
    //printf("ENTER NUMBER OF CASES: ");
    scanf("%d", &n);
    //printf("ENTER WIDTH AND HEIGHT OF THE FRAME: \n");
    for(i=0; i<n; i++)
        scanf("%d %d", &W[i], &H[i]);
    for(i=0; i<n; i++){
        if((W[i]<L)||(H[i]<L)) printf("\nUPLOAD ANOTHER\n");
        else if(W[i]>=L && H[i]>=L){
            if(W[i] == H[i])
                printf("\nACCEPTED\n");
            else printf("\nCROP IT\n");
        }
    }
    return 0;
}
