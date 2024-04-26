/*#include <stdio.h>
#include <stdlib.h>

void random(int *myRandomNum);

int main()
{
    int myRandomNum;

    int randomNum = rand() % 10;
    random(&myRandomNum);
    while (randomNum != myRandomNum)
    {
        printf("You lost. Try again");
        random(&myRandomNum);
        break;
    }
    if (randomNum == myRandomNum)
    {
        printf("You won!");
    }
    return 0;
}

void random(int *myRandomNum)
{
    printf("Enter a random number between 0 and 20: ");
    scanf("%d", myRandomNum);
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomN()
    {
        int myRandomNum;
        int randomNum;

        printf("You lost!\nThe random number was: %d\n", randomNum);
        printf("Enter a random number between 0 and 10: ");
        rand() % 10;
    }

int main()
{
    int myRandomNum;
    srand(time(NULL));

    printf("Enter a random number between 0 and 10: ");
    scanf("%d", &myRandomNum);
    int randomNum = rand() % 10;
    if (myRandomNum == randomNum)
    {
        printf("You won!");
    }
    else
    {
        void randomN();
        /*printf("You lost!\nThe random number was: %d\n", randomNum);
        printf("Enter a random number between 0 and 10: ");
        rand() % 10;*/
    }
    /*while (myRandomNum != randomNum)
    {
        void randomN();
        break;
    }*/
    return 0;
}
