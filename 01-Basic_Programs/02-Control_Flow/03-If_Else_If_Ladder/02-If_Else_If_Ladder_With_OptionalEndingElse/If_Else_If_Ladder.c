#include <stdio.h>
int main(void)
{
	// Variable declarations
	int iNum;

	// Code
	printf("\n\n");

	printf("Enter the number :");
	scanf("%d", &iNum);

	// IF - ELSE - IF LADDER BEGINS FROM HERE...
	if (iNum < 0)
		printf("%d is negative number !!\n", iNum);
	
	else if ((iNum > 0) && (iNum <= 100))
		printf("%d is between 0 and 100 !!!\n", iNum);
	
	else if ((iNum > 100) && (iNum <= 200))
		printf("%d is between 100 and 200 !!!\n", iNum);
	
	else if ((iNum > 200) && (iNum <= 300))
		printf("%d is between 200 and 300 !!!\n", iNum);
	
	else if ((iNum > 300) && (iNum <= 400))
		printf("%d is between 300 and 400 !!!\n", iNum);
	
	else if ((iNum > 400) && (iNum <= 500))
		printf("%d is between 400 and 500 !!!\n", iNum);
		
	else if ( iNum > 500)
		printf("%d is greater than 500 !!!\n", iNum);
		
	else	// *** THIS IS TERMINATING 'ELSE' IN THIS LADDER !!! ***
		printf("Invalid value entered !!");
	
	return 0;
}
