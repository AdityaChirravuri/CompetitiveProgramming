#include <stdio.h>
int odd(int s);

int main()
{
    char s[10];
    int sum=0;
    scanf("%s", s);
    sum = s[0] + s[1];
    if(odd(sum)==1){
        if((s[2]=='A')||(s[2]=='E')||(s[2]=='I')||(s[2]=='O')||(s[2]=='U')||(s[2]=='Y'))
         printf("invalid");
        else {
            sum = 0;
            sum = s[3]+s[4];
            if(odd(sum)==1){
                sum = 0;
                sum = s[4] + s[5];
                if(odd(sum)==1){
                    sum = 0;
                    sum = s[7] + s[8];
                    if(odd(sum)==1)
                    printf("valid");
                    else printf("invalid");
                }else printf("invalid");
            }else printf("invalid");
        }
    }
    else printf("invalid");
    return 0;

}

int odd(int s)
{
    if(s%2==0)
        return 1;
    else return 0;
}
