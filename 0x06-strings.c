#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char inChar = 'K';

	int digit = 2;

	if (isalpha(inChar))
	{
		printf("Your input was a letter.\n");
	}

	if (isdigit(digit))
	{
		printf("A Number\n");
	}

	return (0);
}
