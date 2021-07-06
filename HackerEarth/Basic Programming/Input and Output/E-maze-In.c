#include <stdio.h>

int main()
{
    int i=0, j=0, k;
    char s[201];
    printf("ENTER STRING: \n");
    scanf("%s", s);
    for(k=0; s[k]!= '\0'; k++){
        if(s[k] == 'L')
            i--;
        else if(s[k] == 'R')
            i++;
        else if(s[k] == 'U')
            j++;
        else j--;
    }
    printf("%d %d", i, j);
    return 0;
}
