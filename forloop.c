#include <stdio.h>
int main()
{
	char operate;
	double n1, n2;
	
	printf("Choose an operator (+, - ,* , /): ");
	scanf("%c", &operate);
	printf("enter a number:");
	scanf("%lf", &n1);
	printf("enter a second number:");
	scanf("%lf", &n2);
	
	switch(operate)
	{
		case '+':
		printf("%.lf + %.lf is equal to %.lf",n1, n2, n1+n2);
		break; 
		
		case '-':
		printf("%.lf - %.lf is equal to %.lf",n1, n2, n1-n2);
		break;
		
		case '*':
		printf("%.lf * %.lf is equal to %.lf",n1, n2, n1*n2);
		break;
		 
		case '/':
		printf("%.lf / %.lf is equal to %.lf",n1, n2, n1/n2);
		break;
		
		
		default:
			printf("ERROR!!!!");{
			printf("\nthe operator you've entered did not match");
			}
		
			}
     return 0;
	
	}