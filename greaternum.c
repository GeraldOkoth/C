#include <stdio.h>

/**
 * main - Compares two variables
 * Return: 0 (Succees)
 */

int main(void)
{
	int x, y, z;

	x = 328;
	y = 32;
	z = 94;

	if (x > y && x > z)
	{
	    printf("%d is greater than %d and %d", x, y, z);
    }
    else if (y > x && y > z)
    {
        printf("%d is greater than %d and %d", y, x, z);
    }
    else
	{
		printf("%d is greater than %d and %d", z, x, y);
    }
	return (0);
}
