/*
 * C Pointers
*/

#include <stdio.h>

int main()
{
	int age;
	int * pAge;

	age = 29;
	pAge = &age; /* Linking to pointer */

	printf("The age is %d.\n", age);
	printf("The age is %d.\n", *pAge);

	int vals[5] = {10, 23, 40, 56,76};

	/*The first value of array */
	printf("The first value is %d.\n", vals[0]);
	printf("The first value is %d.\n", *vals);
	printf("The first value is %d. \n", *(vals + 0));

	return (0);
}
