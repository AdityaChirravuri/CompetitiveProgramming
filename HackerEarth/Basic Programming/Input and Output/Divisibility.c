#include <stdio.h>

int main(){
	int N = 0;
	scanf("%d", &N);

	long data[N], rem=0, sum=0;
	for(auto i=0; i<N; i++){
	    scanf("%ld", &data[i]);
		rem = data[i]%10;
	    sum = sum * 10+ rem;
	}

    // write your code here
    // ans =
    char ans[5];
	if(sum%10==0)
	strcpy(ans, "Yes");
	else strcpy(ans, "No");

    printf("%s", ans);

    return 0;
}
