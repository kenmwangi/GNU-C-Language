/* Sizeof() - getting number of memory locations to store values of data type
 * */

#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "Ken Mwangi";
	int i = 7;

	printf("The size of i is %ld.\n", sizeof(i));
	printf("The size of name is %ld.\n", sizeof(name));

	/* Printing the length of string */
	printf("The length of the string is %ld.\n", strlen(name));
	return 0;
}
