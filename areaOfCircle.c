//Program to compute the are of circle.
#include <stdio.h>
#define PI 3.1415
#define area(radius) (PI*(r)*(r))
/**
 * main - Compute the area of a circle
 * Return : 0 (successful)
 */

int main(void)
{
    printf("\t\tProgram to compute the area of a circle.");
    printf("\n\t\t========================================\n");
	/*input can be an integer or a float*/
	float r, area;

	printf("Enter the radius: ");
	scanf("%f", &r);
	//area = PI*r*r;
	area = area(r);
	printf("\nArea = %.2f square units\n", area); //print the area with two decimal places
	return (0);
}
