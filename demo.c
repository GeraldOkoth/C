#include <stdio.h>

/**
 * main - Compares two variables
 * Return: 0 (Succees)
 */

int main(void)
{
	int x;
	int y;

	x = 8;
	y = 5;

	if (x > y)
	{
		printf("%d is greater than %d\n", x, y);
	}
	else 
	{
		printf("y is greater than x");
	}
	return (0);
}
