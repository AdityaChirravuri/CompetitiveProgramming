#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, count;
    char a[1000], b[1000];
    scanf("%d", &t);
    while(t>0){
        scanf("%*c%s%*c%s", a, b);
        //printf("%d %d\n", strlen(a), strlen(b));
        count =0;
        for(i=0; i<strlen(a); i++){
            for(j=0; j<strlen(b); j++){
                if(a[i]==b[j]){
                    count++;
                    a[i]='0'; b[j] ='1';
                    break;
                }
            }
        }
        int h = strlen(a) + strlen(b) - (2*count);
        printf("%d\n", h);
       // printf("%d\n", count);
       t--;
    }
}
