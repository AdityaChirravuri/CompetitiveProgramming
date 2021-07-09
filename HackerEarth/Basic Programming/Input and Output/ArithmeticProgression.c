#include <stdio.h>
#include <math.h>

int main()
{
	int t, a, b, c;

	scanf("%d", &t);

	while(t){
		scanf("%d %d %d", &a, &b, &c);
		int dif1 = b - a;
		int dif2 = c - b;
		int d = abs(dif1 - dif2);
		d++;
		printf("%d\n", d/2);
		t--;
	}

	return 0;
}
