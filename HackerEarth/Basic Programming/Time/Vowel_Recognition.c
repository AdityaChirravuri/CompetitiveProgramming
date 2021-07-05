#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[100001];
	int t;
	scanf("%d", &t);
	while(t>0){
    scanf("%s", s);
    int m = strlen(s), i;
    int count =0;
    for(i=0; i<m; i++){
        s[i] = tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        count += ((m-i)*(i+1));
    }
    printf("%d\n", count);
	t--;
	}
    return 0;
}
