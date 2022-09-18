#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char inChar = 'K';
	char inLetter = 'C';
	int digit = 2;

	if (isalpha(inChar))
	{
		printf("Your input was a letter.\n");
	}

	if (isdigit(digit))
	{
		printf("A Number\n");
	}

	if ((inLetter >= 'A') && (inLetter <= 'Z'))
	{
		printf("Letter is uppercase\n");
	}

	if (isupper(inLetter))
	{
		printf("Letter is BETTER uppercase\n");
	}

	if (islower(inLetter))
	{
		printf("Letter is lowercase. \n");
	} else 
		printf("Letter is still UPPERCASE.\n");

	return (0);
}
