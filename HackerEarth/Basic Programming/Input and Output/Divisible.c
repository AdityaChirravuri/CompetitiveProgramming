#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int a[n];
   int sum=0;
   for(int i=1;i<=n;i++)
      scanf("%d", &a[i]);
   for(int i=1;i<=n/2;i++)
   {
       while(a[i] >= 10)
   {
       a[i] = a[i] / 10;
   }
       if(i%2==0)
           sum=sum+a[i]*-1;
       else
           sum= sum+a[i];
   }
   for(int i=n/2+1;i<=n;i++)
   {

       a[i] = a[i] % 10;
       if(i%2==0)
          sum=sum+a[i]*-1;
       else
           sum= sum+a[i];
   }
   if(sum==0||sum==11)
       printf("OUI");
   else
      printf("NON");

}
