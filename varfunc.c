#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// define a variadic function
int sum(int count, ...) //pass the number of arguments in the sum function
{
    va_list(args); //store arguments
    va_start(args, count); //takes the stored arguments and the first parameter passed to the list
    int i;
    int x;
    int sum = 0;

    for (i = 0; i < count; i++)
    {
        x = va_arg(args, int);
        sum += x;
    }
    va_end(args);
    return sum;
}

//Alternative code
/*int sum(int a, ...)
{
    va_list(args);
    va_start(args, a);
    int i;
    int sum = a;
    int x = va_arg(args, int);

    while (x != 0)
    {
        sum += x;
        x = va_arg(args, int);
    }

    va_end(args);
    return sum;
}*/


int main(int argc, char *argv[])
{
    printf("Sum is: %d\n", sum(4, 5, 17, 2, 0));
    return 0;
}

