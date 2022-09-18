#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;

	char name[30] = "Ken";
	float weight = 60.0192;

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);

	/* formating strings & integers */
	printf("My name is %s.\n", name);
	printf("I weigh \t %.2f.\n", weight);

	return 0;
}
