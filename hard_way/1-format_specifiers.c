#include <stdio.h>

#define ARRAY_SIZE 10

int main()
{
	int data1, data2, data3;

	float data = 6.45;

	int octo = 65;

	char blogName[] = "Ken Mwangi";

	char c;
	char buf[ARRAY_SIZE];

	printf("Enter a string: ");

	fgets(buf, ARRAY_SIZE, stdin);

	printf("string is: %s\n", buf);

	scanf("%c", &c);
	printf("%c\n", c);

	printf("%s\n", blogName);
	printf("%f\n", data);
	printf("%e\n", data);
	printf("%o\n", octo);
	printf("%x\n", octo);

	
	printf("Enter value in decimal format: ");
	scanf("%d", &data1);
	printf("data1 = %i\n\n", data1);

	printf("Enter value in hexadecimal format:");
	scanf("%i", &data2);
	printf("data2 = %i\n\n", data2);

	printf("Enter value in octal format:");
	scanf("%i", &data3);
	printf("data2 = %i\n\n", data3);

	return 0;
}
