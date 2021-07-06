#include<stdio.h>
#include<string.h>

int main()
{
    int test  ,i  , j, flag;
    scanf("%d",&test);
    char str1[100001],str2[100001];


    while(test--) {
    scanf("%*c%s%*c%s",str1,str2);
      for(i=0;i<strlen(str1);i++){
        flag=0;
        for(j=0;j<strlen(str2);j++){
            if(str1[i]==str2[j]){
            flag=1;
            str2[j]='0';
            break;
            }
        }
    if(flag==0)
    break;
    }
    flag==1?printf("YES\n"):printf("NO\n");
    }
return 0;
}
