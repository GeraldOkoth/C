#include <stdio.h>
/**
 * main - Prints the sizes of various data types
 * return : 0 (Success)
 **/

int main(void)
{
    int age = 44; //Declaration of an integer variable

    printf("Size of age: %ld bytes\n", sizeof(age));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    return 0;
}
