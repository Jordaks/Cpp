#include <stdio.h>
int main()
{
	
	int n1, n2, n3;
	int highest, lowest;
	
	printf("enter an integer:");
	scanf("%d", &n1);
	printf("enter an integer:");
	scanf("%d", &n2);
	printf("enter an integer:");
	scanf("%d", &n3);
	
	highest=n1 ;
		
	if( n2 > highest){
		highest = n2;
    	} if (n3 > highest){
		highest = n3;
	}printf("highest number:%d", highest);



	
	return 0;
}