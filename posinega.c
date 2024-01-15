#include <stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d", &number);
	
    if (number <= 0) {
        if (number == 0)
            printf("You entered 0");
        else
            printf("You've entered a negative number.");
    } 
    else
        printf("You've entered a positive number.");

	
	return 0;
}