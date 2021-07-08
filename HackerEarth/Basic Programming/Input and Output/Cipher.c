#include<stdio.h>

int main()
{
	char s[1000];
	int k, i;
	scanf("%s", s);
	scanf("%d", &k);
	for(i=0; s[i]!='\0'; i++){
	if(s[i]>= 'a'&&s[i] <= 'z')
        s[i] = (s[i] + k - 'a')%26 + 'a' ;
    if(s[i] >= 'A'&&s[i] <= 'Z')
       s[i] = (s[i] + k - 'A')%26 + 'A';
	if(s[i] >= '0' && s[i] <= '9')
		s[i] = (s[i] + k - '0')%10 + '0';
	}
	printf("%s", s);
	return 0;
}
