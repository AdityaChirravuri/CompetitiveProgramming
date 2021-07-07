#include <stdio.h>

int main()
{
    int a=0, b, t, f;
    scanf("%d", &t);
    int i;
    b = 7;
    for(i=0; i<t; i++){
        scanf("%d", &f);
        a = f - a;
        b = b - f;
        if(a>b){printf("B\n"); a-=f;}
        else if(a<=b){printf("A\n"); b += f;}
        //printf("a = %d b = %d\n", a, b);
    }
}
