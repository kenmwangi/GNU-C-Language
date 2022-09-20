#include <stdio.h>

int main()
{
	int aiData[5] = {10,5,6,7,8};

	printf("Address of first element %p\n\n", &aiData[0]);
	printf("Address of first element %p\n\n", aiData);
	
	return (0);
}
