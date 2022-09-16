#include <stdio.h>

/*
 * function prototype
 */

void check_even_or_odd(void)
{
	int num;

	printf("Please enter any number to check if it's positive or negative: \n");
	scanf("%d", &num);
	
	if ( num % 2 == 0)
		printf("%d is Even Number. \n", num);
	else
		printf("%d is Odd Number. \n", num);

}

/*
 * Main function - returns 0 is success
 */
 int main (void)
{
	// calling function
	check_even_or_odd();

	return (0);
}
