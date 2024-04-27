#include <stdio.h>
#include <string.h>

int main(void)
{
    int marks;
    char username[15] = "TechiesKE";
    char name[20] = "Gerald Okoth";
    char password[10] = "root";
    char userName[20], passwordCredent[20];

    printf("\t\tWelcome to login page!\n");
    printf("\t\t======================\n");

    printf("\nHello %s", name);
    printf(", Kindly enter your user logins below and press enter to continue.\n");

    printf("\nPlease enter your username: ");
    if (fgets(userName, sizeof(userName), stdin) == NULL) {
        printf("Error reading username.\n");
        return 1;
    }
    printf("Please enter your password: ");
    if (fgets(passwordCredent, sizeof(passwordCredent), stdin) == NULL) {
        printf("Error reading password.\n");
        return 1;
    }

    // Removing the newline character at the end of the strings
    userName[strcspn(userName, "\n")] = '\0';
    passwordCredent[strcspn(passwordCredent, "\n")] = '\0';

    if (strcmp(userName, username) == 0 && strcmp(passwordCredent, password) == 0)
    {
        printf("\nLogin successful!\n");
        printf("Please enter your marks: ");
        scanf("%d", &marks);

        if (marks < 40)
        {
            printf("Failed!\n");
        }
        else if (marks >= 40 && marks < 60)
        {
            printf("Pass\n");
        }
        else if (marks >= 60 && marks < 70)
        {
            printf("Good!\n");
        }
        else if (marks >= 70)
        {
            printf("Excellent!\n");
        }
        else {
            printf("Missing marks!\n");
        }
    }
    else
    {
        printf("\nWrong username or password, please try again!\n");
    }

    return 0;
}
