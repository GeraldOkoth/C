#include <stdio.h>
int main ()
{
    int x = 4;
    switch(x)
    {
        case 1:
        printf("print 1");
        break;
        case 2:
        printf("print 2");
        break;
        case 4:
        printf("print 4");
        break;
        case 3:
        printf("print 3");
        break;
        default:
        printf("No match");
    }
    return 0;
}
