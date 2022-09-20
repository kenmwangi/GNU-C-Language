#include <stdio.h>
#include <stdbool.h>

/*
 * Finding size of int, float double and char
 */

/* enumeration - contains set of named integer constant values */

enum Ecolor {RED = 100, GREEN, BLUE};

int main(void)
{
	int a;
	float b;
	double c;
	char d;

	bool test_true = true;
	bool test_false = false;

	enum Ecolor colourCode = RED;
	printf("%d \n", colourCode);


	printf("test_true&&test_false = %d\n\n", test_true&&test_false);
	printf("test_true||test_false = %d\n\n", test_true||test_false);
	printf("!test_false = %d\n", !test_false);

	printf("Size of int: %zu bytes\n", sizeof(a));
	printf("Size of float: %zu bytes\n", sizeof(b));
	printf("Size of char: %zu bytes\n", sizeof(d));
	printf("Size of double: %zu bytes\n", sizeof(c));

	return (0);
}
