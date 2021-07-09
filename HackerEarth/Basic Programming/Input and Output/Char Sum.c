#include <stdio.h>

int main()
{
    char s[101];
    printf("ENTER STRING: ");
    scanf("%s", s);
    int i, sum=0;
    i=0;
    while(s[i]!='\0'){
        sum = sum + s[i] -'a' + 1;

        i++;
    }
    printf("%d", sum);
    return  0;
}
