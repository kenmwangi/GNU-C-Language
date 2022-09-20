#include <stdio.h>

int main (void)
{
	// examples
	

	/*arry of 5 integer*/
	int arr[5];
	int i;
       	// array of 5 character
	char arr1[5];
	// 5 float
	float arr2[5];

	/* Method 1 -  declaring and initializing an array */
	int aiData[10] = {0,1,2,3,56,7,8,9,0};

	/* Method 2 - initialize from brace-enclosed lists */
	int arr1[] = {10, 20, 30}; // holds 10,20,30
	int arr2[5] = {10,20,30}; // holds 10,20,30,0,0
	int arr3[3] = {0}; // holds 0,0,0

	/* array initialize for strings */
	char str1 = "abc";
	char str2[3] = "abc";

	/*DESIGNATED INITIALIZERS - since c99 */
	int a[6] = {[4] = 29, [2] = 15};

	int a[6] = {[4]29, [2]15}; /*same as int a[6] = {0,0,15,0,29,0}*/

	/*getting 5 elements from the user */
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Print array elements\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	return (0);



	
}
