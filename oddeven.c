#include <stdio.h>
int main()
{
	
	int number;
	printf("Enter an odd or even number:");
	scanf("%d", &number);
	
	if (number %2 == 0) {
		printf("this %d digits you entered is even", number);
	}else{
		printf("this %d digits you entered is odd", number);
	}
	
	return 0;
}