/*
 * Logical operators
 * author: Ken Mwangi @ken_cipher
 */

#include <stdio.h>

int main (void)
{
	char name[25];

	int numPear;
	char pears;

	scanf("How many %c eaten today?", &pears);
	printf("I ate %d pear%s\n", numPear, (numPear>1) ? ("s.") : ("."));

	printf("What is your last name?");

	printf("(Please capitalize the first letter!)\n");
	scanf(" %s", name);

	if ((name[0] >= 'P') && (name[0] <= 'S'))
	{
		printf("You must be nugu!\n");
	}
	else
	{
		printf("You must be Noble!\n");
	}
	return (0);
}
