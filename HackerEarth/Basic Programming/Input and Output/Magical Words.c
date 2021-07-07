//something went wrong just check again
#include <stdio.h>
#include <string.h>

void problem(char str[])
{
    for(int i=0; str[i]!='\0'; i++){
        int a= str[i];
        printf("%d %c\n", a, str[i]);

        if(a >= 112) str[i] = 'q';

        if (a <= 69)str[i] = 'C';

        else if (a > 69 && a <= 72)str[i] = 'G';

        else if (a > 72 && a <= 76)str[i] = 'I';

        else if (a > 76 && a <= 81)str[i] = 'O';

        else if (a > 81 && a <= 86)str[i] = 'S';

        else if (a > 86 && a <= 93)str[i] = 'Y';

        else if (a > 93 && a <= 99)str[i] = 'a';

        else if (a > 99 && a <= 102) str[i] = 'e';

        else if (a > 102 && a <= 105)str[i] = 'g';

        else if (a > 105 && a <= 108)str[i] = 'k';

        else if (a > 108 && a <= 111)str[i] = 'm';

        else if (a > 111)str[i] = 'q';
    }

    printf("%s ", str);
}

int main()
{
    int t, n;
    char str[501];
    scanf("%d", &t);

    while(t!=0){
        scanf("%d %s", &n, str);
        problem(str);
        t--;
    }


}


//67 71 73  79 83 87  89 97 101 103 107 109 113
// these are the prime numbers for the required ascii characters
