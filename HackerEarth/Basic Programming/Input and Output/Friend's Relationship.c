#include <stdio.h>

int main()
{

    int T, n, i, j, k, h, l;
    printf("NETER NUMBER OF TEST CASES: ");
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d", &n);
        for(k=0; k<n; k++){
            for(h=0; h<k+1; h++)
            printf("*");
            for(j=k+1; j<(2*n)-h; j++){
            printf("#");
            }
            for(l=2*n-h; l<2*n; l++)
                printf("*");
        printf("\n");
        }
    printf("\n");
    }
    return 0;
}
