/*
 * Author: Ken Mwangi
 * 
 * File: variables.c
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char Kid1[12];
	char Hero2[34] = "Spiderman";
	char Hero3[25];

	strcpy(Hero3, "The Incredible Hulk");

	printf("%s\'s favorite hero is %s.\n", Kid1, Hero3);

	return (0);
}
