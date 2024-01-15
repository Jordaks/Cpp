#include <stdio.h>
int main()
{
	int i, j, rows;
	printf("enter a number of rows:");
	scanf("%d", &rows);
	
	for ( i=rows; i>=1; --i)
	{
		for( j=1; j<=i; ++j)
		{
			printf("%d");
		}printf("\n");
	}
	return 0;
}