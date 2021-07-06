#include<stdio.h>

int main()
{
	int i;
	char s[1000];
	scanf("%s", s);
	i=0;
	while(s[i] != '\0'){
		if((s[i] >= 'a')&&(s[i] <= 'z'))
		s[i] = s[i] - 'a'+'A';
		else if((s[i]>='A')&&(s[i]<='Z'))
		s[i] = s[i] - 'A' + 'a';
		i++;
	}
	printf("%s", s);
}
