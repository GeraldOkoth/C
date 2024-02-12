#include <stdio.h>
#define PI 3.1415
#define area(radius) (PI*(r)*(r))
/**
 * main - Compute the area of a circle
 * Return : 0 (successful)
 */

int main(void)
{
	/*input can be an integer or a float*/
	float r;
	float area;

	printf("Enter the radius: ");
	scanf("%f", &r);
	//area = PI*r*r;
	area = area(r);
	printf("\nArea = %.2f square units\n", area); //print the area with two decimal places
	return (0);
}
