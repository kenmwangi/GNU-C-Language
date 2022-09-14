#include <stdio.h>

void hello()
{
	printf("Hello world\n");
}

/*
 * main function
 * return 0: sucess 
 */

int main()
{
	hello();

	char first, middle, last;
	int age;
	printf("Enter your initials, followed by your age: ");
	scanf("%c %c %c %d", &first, &middle, &last, &age);
	printf("My Initals are: %c %c %c and my age is %d. \n", first, middle, last, age);
	return (0);
}
