#include <bits/stdc++.h>
using namespace std;

int main() {
	int amount;
	float Total;
	
	scanf("%d %f", &amount, &Total);
			
	if(0<=amount<=2000 && 0<=Total<=2000){
	    if((amount+0.50 > Total || amount%5 !=0)){
	        printf("%.2f", Total);
	        return 0;
	    }
	    else {
	        Total = Total -(amount + 0.50);
	        printf("%.2f", Total);
	        return 0;
	    }
	}
		
	printf("%.2f", Total);
	return 0;
}
