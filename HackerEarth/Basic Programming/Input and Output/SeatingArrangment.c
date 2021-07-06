#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        int rem = n%12;
        if(rem==0|| rem==1)        rem == 0 ? printf("%d WS\n", n-11): printf("%d WS\n", n+11);
        else if(rem==2|| rem ==11) rem == 2 ? printf("%d MS\n", n+9) : printf("%d MS\n", n -9);
        else if(rem==3||rem==10)   rem == 3 ? printf("%d AS\n", n+7) : printf("%d AS\n", n-7);
        else if(rem==4||rem==9)    rem == 4 ? printf("%d AS\n", n+5) : printf("%d AS\n", n-5);
        else if(rem==5||rem==8)    rem == 5 ? printf("%d MS\n", n+3) : printf("%d MS\n", n-3);
        else if(rem==6||rem==7)    rem == 6 ? printf("%d WS\n", n+1) : printf("%d WS\n", n-1);
    }
    return 0;
}
