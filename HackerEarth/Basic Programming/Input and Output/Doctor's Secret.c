#include <stdio.h>

int main()
{
    int l, n;
    printf("ENTER LENGTH OF THE SECRET BOOK: ");
    scanf("%d", &l);
    printf("ENTER NUMBER OF PAGES IN THE BOOK: ");
    scanf("%d", &n);
    if(l<=23){
        if(n>500 && n<1000)
            printf("Take Medicine");
        else printf("Don't take Medicine");
    }
    else printf("Don't take Medicine");
    return 0;
}
