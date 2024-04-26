#include <stdio.h>
int main()
{
    int marks = 44;

    if (marks < 40)
    {
            printf("Failed!\n");
    }
    else if (marks < 59 && marks > 40)
    {
            printf("Pass\n");
    }
    else if (marks > 59 && marks < 70)
    {
            printf("Good!\n");
    }
    else if (marks >= 70)
    {
            printf("Excellent!\n");
    }
    else
    {
            printf("Missing marks!");
    }
}
