#include <stdio.h>

int main()
{
    /*char myname[15];*/
    int username = 54;
    int password = 4679;

    /*printf("Welcome to login page!\nType your full name and press enter: ");
    fgets(myname, sizeof(myname), stdin);
    printf("\nHello %s \nkindly type in your username and password, click enter to proceed.\n", myname);*/
    printf("\nusername: ");
    scanf("%d", &username);

    if (username = 54)
    {
        printf("password:");
       /* scanf("%d", &password);*/
    }
    else
    {
        printf("You entered the wrong username, try again!");
    }
    if (password = 4679)
    {
        printf("\nLogin successful\n");
    }
    else
    {
        printf("Login unsuccessful!");
    }
    return 0;
}
