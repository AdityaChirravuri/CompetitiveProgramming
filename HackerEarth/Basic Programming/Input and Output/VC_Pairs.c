#include <stdio.h>
#include <stdbool.h>

bool is_v(char s[], int i);
bool is_c(char s[], int k);

int main()
{
    int t, n, i, j;
    char s[100001];
    scanf("%d", &t);
    while(t!=0){
        scanf("%d", &n);
        scanf("%s", s);
        int p=0;
        for(j=0; s[j]!='\0'; j++){
            if(is_c(s, j) && is_v(s, j+1))
                p++;
        }
        printf("%d\n", p);
        t--;
    }
    return 0;
}
bool is_v(char s[], int i)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        return true;
        else return false;
}

bool is_c(char s[], int i)
{
    if(is_v(s, i))return false;
    else return true;

}
/*
#include <stdio.h>
char s[100000];
void main()
{
int t;

scanf("%d",&t);

while(t>0){
	long int n;
 	int x=0;
 	char v[5]={'a','e','i','o','u'};

 	scanf("%ld",&n);

 	scanf("%s",s);
 	for(long int i=1;i<=n;i++) {
  		for(int j=0;j<5;j++){
   			if(s[i]==v[j]&&s[i-1]!=v[j])
    		x++;
    	}
  	}
	printf("%d\n",x);
 	t--;
	}
} */
