//Program to output greater number among three user inputs.
#include <stdio.h>

/**
 * main - Compares two variables
 * Return: 0 (Succees)
 */

int main(void)
{
    printf("\t\tProgram to print size of basic datatypes.");
    printf("\n\t\t========================================\n");
	int num1, num2, num3;

	printf("Please enter three integers: \n");
	scanf("%i%i%i", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
	{
	    printf("\n%d is greater than %d and %d\n", num1, num2, num3);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\n%d is greater than %d and %d\n", num2, num1, num3);
    }
    else
	{
		printf("\n%d is greater than %d and %d\n", num3, num1, num2);
    }
	return (0);
}
