  
#include <stdio.h>


int main()
{
    int sh, eh, sm, em;
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);
    //printf("%d %d %d %d\n", sh, sm, eh, em);
    int t_m =0, m=0;
    while(sm!=em){
        if(sm==60) {sm = 0; m=1;};
        sm++;
        t_m++;
    }
    int t_h = eh - sh - m;
    //printf("%d %d %d %d", sh, sm, eh, em);
    printf("%d %d\n", t_h, t_m);
    }
    return 0;
}
