#include <stdio.h>

/*
 * print number - prints number entered by the user
 * Return 0: (Success)
 */

void print_number()
{
	int i;
	float f;

	printf("Please enter an integer and a float: \n");
	scanf("%d %f", &i, &f);
	printf("Entered numbers are: %d %5.2f \n", i, f);

}

int main()
{
	print_number();

	return (0);
}
