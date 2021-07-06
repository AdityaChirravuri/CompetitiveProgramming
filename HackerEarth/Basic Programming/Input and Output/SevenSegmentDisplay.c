#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Totalsticks(char str[], int arr[]);

int main()
{
    int t, a;
   // arr is used to store the number of sticks used
    int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	char str[101];
    scanf("%d", &t);

    while(t){
        scanf("%s", str);
        a =  Totalsticks(str, arr);
        printf("%d ", a);
		if(a%2 == 1){
			printf("%d", 7);
			a =a -  3;
		}
		a = a/2;

		while(a){
		printf("%d", 1);
		a--;
		}
		printf("\n");
        t--;
    }


}

int Totalsticks(char str[], int arr[])
{
    int sum=0;
    for(int i=0; str[i] != '\0'; i++){
		if(str[i] == '0') sum += arr[0];
		if(str[i] == '1') sum += arr[1];
		if(str[i] == '2') sum += arr[2];
		if(str[i] == '3') sum += arr[3];
		if(str[i] == '4') sum += arr[4];
		if(str[i] == '5') sum += arr[5];
		if(str[i] == '6') sum += arr[6];
		if(str[i] == '7') sum += arr[7];
		if(str[i] == '8') sum += arr[8];
		if(str[i] == '9') sum += arr[9];
	}
    return sum;
}
