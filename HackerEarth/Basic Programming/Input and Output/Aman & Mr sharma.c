#include <stdio.h>
#define p 22/7

int main()
{
    int d, r, x, i, t=0;
    scanf("%d", &d);
    for(i=0; i<d; i++){
        scanf("%d %d", &r, &x);
        int d = 44*r;
        int dis = 700 * x;
        //printf("%d %f\n", dis, d);
        if(dis >d)
            t++;
    }
    printf("%d", t);
    return 0;
}
