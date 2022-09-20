#include <stdio.h>

/*
 * checking type of passed argument
*/
#define TYPE_NAME(X) _Generic((X), \
int: "int", \
char: "char", \
double: "double", \
default: "unknown")

int main()
{
	printf("Type name: %s\n", TYPE_NAME(27));

	return (0);


}
