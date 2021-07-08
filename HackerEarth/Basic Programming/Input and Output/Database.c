#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    int t,i,j,k;

    scanf("%d", &t);

    while(t){
        int atr, tup, *len;
        char ***fld;
        scanf("%d %d", &atr, &tup);
        tup++;

        len=(int *)calloc(atr, sizeof(int));
        fld=(char ***)calloc(atr, sizeof(char **));

        for(i=0;i<atr;i++){
            fld[i]=(char **)calloc(tup,sizeof(char *));
                for(j=0;j<tup;j++){
                fld[i][j]=(char *)calloc(100,sizeof(char));
            }
        }

        for(i=0;i<tup;i++){
            for(j=0;j<atr;j++){
                scanf(" %s", fld[j][i]);
                len[j]=(strlen(fld[j][i])>len[j])?strlen(fld[j][i]):len[j];
            }
        }

        for(j=0;j<atr;j++){
            printf("+");
            for(k=0;k<len[j]+2;k++){
                printf("-");
            }
        }

        printf("+\n");

        for(i=0;i<tup;i++){
            for(j=0;j<atr;j++){
                int flag=1;
                for(k=0;k<strlen(fld[j][i]);k++){
                    if(!(isdigit(fld[j][i][k]))){
                        flag=0;
                        break;
                    }
                }
                printf("| ", fld[j][i]);
                if(!flag){
                    printf("%s", fld[j][i]);
                    for(k=0;k<len[j]-strlen(fld[j][i])+1;k++){
                        printf(" ");
                    }
                }
                else{
                    for(k=0;k<len[j]-strlen(fld[j][i]);k++){
                        printf(" ");
                    }
                    printf("%s ", fld[j][i]);
                }
            }
            printf("|\n");
            if(i==0){
                for(j=0;j<atr;j++){
                    printf("+");
                    for(k=0;k<len[j]+2;k++){
                        printf("-");
                    }
                }
                printf("+\n");
            }
        }
        for(j=0;j<atr;j++){
            printf("+");
            for(k=0;k<len[j]+2;k++){
                printf("-");
            }
        }
        printf("+\n");
        t--;
    }


    return 0;
}
