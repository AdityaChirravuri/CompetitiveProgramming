#include<stdio.h>

int main()
{
    int t,p,g,n,f,s,sum1=0,sum2=0;
    scanf("%d\n",&t);//2
    for(int i=0;i<t;i++){ scanf("%d %d\n",&p,&g);//1 9
    scanf("%d\n",&n);//10

    for(int r=0;r<n;r++){
        scanf("%d %d\n",&f,&s);
        sum1=sum1+(f*p)+(s*g );
        sum2=sum2+(f*g)+(s*p);
        }
        if(sum1>sum2){
            printf("%d\n",sum2);}
        else {
            printf("%d\n",sum1);
            }
        sum1=(sum1)*0;
        sum2=(sum2)*0;
        }
    return 0;
}
