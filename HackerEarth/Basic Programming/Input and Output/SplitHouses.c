#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char *s = (char *)calloc(n, sizeof(int));
    scanf("%s", s);
    int flag=0;
    for(int i = 0; s[i]!='\0'; i++){
        if(s[i]!='H')
            s[i] = 'B';
    }
    for(int i = 0; s[i]!='\0'; i++)
        if(s[i]=='H'&&s[i+1]=='H'){
        flag = 1;
        break;
    }
    if(flag == 1)printf("NO");
    else printf("YES\n%s", s);


    return 0;
}
