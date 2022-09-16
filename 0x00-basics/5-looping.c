#include <stdio.h>

void factorial(void)
{
	int answer = 5 * 4 * 3 * 2 *1;
	printf("Answer = %d\n", answer);
}
// Factorial using for loop

void factorial_loop(void)
{
	int answer = 1;
	int i;

	for (i =2; i <=10; i++)
	{
		answer = answer * i;
	}
	printf("Answer = %d\n", answer);

}

void read_nums(void)
{
	int i, numberOfNums=0, total=0, value;
	float average;

	printf("How many numbers are to be read?");
	scanf("%d", &numberOfNums);

	for (i=0; i<numberOfNums; i++)
	{
		scanf("%d", &value);
		total += value; // equivalent to total = total + value
		printf("Read %d\n", value);
	}

	average = (float)total / (float)numberOfNums;
	printf("You have read %d values. Average = %f.\n", numberOfNums, average);
}
/* main - prints factorial
 * return 0 - if success
 */

int main(void)
{
	// calling factorial prototype in main
	//factorial();

	factorial_loop();

	read_nums();


	return (0);
}
