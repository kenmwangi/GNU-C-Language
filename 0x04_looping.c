/*
 * while loop 
 */

#include <stdio.h>

int main(void)
{
	int inner, outer;

	/*Printing interesting effect */

	for (outer = 1; outer <= 3; outer++)
	{
		for (inner = 1; inner <= 5; inner++)
		{
			printf("%d ", inner);
		}
		printf("\n");
	}

	return (0);
}

