#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// To keep track of number of registrations 
int count = 0;

void createUsername(char username[20][20]);
void createPassword(char password[20][20]);
void registration(char username[20][20], char password[20][20]);
int checkUsername(char username[20][20], int count);
void checkPassword(char username[20][20], char password[20][20], int count, int id);
void login(char username[20][20], char password[20][20]);
void isNoValid(char phoneNo[20]);
int date(int D, int M, int Y);
void enterDetails(char name[20], char rollNo[20], char phoneNo[20], int D, int M, int Y);

int main()
{
    char username[20][20], password[20][20];
    char choice;
    
    printf("\n\t\tWelcome!!!\n\n");
    printf("What do you want to do?\n");
    printf("\n1. Login\n");
    printf("\n2. Sign-in\n");
    printf("\n3. Exit\n");
    printf("\nEnter your choice: ");
    scanf("\n%c", &choice);

    // To check if database is empty or not
    if(count == 0 && choice == '1')
    {
        printf("\nSorry theres currently no account registered\n");
        printf("\nThat's why we are forwarding you to sign-in page\n");
        choice = '2';
    }

    while(1)
    {
        switch (choice)
        {
            case '1':
                login(username, password);
                return 0;
            
            case '2':
                registration(username, password);
                break;

            case '3':
                exit(0);

            default:
                printf("\nInvalid Input\n");
                break;
        }

        printf("\nWhat do you want to do now?\n");
        printf("\n1. Login\n");
        printf("\n2. Sign-in\n");
        printf("\n3. Exit\n");
        printf("\nEnter your choice: ");
        scanf("\n%c", &choice);

        if(count == 0 && choice == '1')
        {
            printf("\nSorry theres currently no account registered\n");
            printf("\nThat's why we are forwarding you to sign-in page\n");
            choice = '2';
        }

        system("cls");
    }

    return 0;
}

// To create a new username
void createUsername(char username[20][20])
{
    printf("\nCreate your username: ");
    scanf("%s", &username[count]);

    for(int i = 0; i < count; i++)
    {
        if(strcmp(username[count], username[i]) == 0)
        {
            printf("\nUsername already in use, please enter a different username\n\n");
            createUsername(username);
        }
    }
}

// To create a new password
void createPassword(char password[20][20])
{
    int length;

    printf("\nCreate a password: ");
    scanf("%s", &password[count]);

    length = strlen(password[count]);

    while(length < 7)
    {
        printf("\nPassword can't be of less than 7 characters\n\n");

        printf("Create a different password: ");
        scanf("%s", &password[count]);

        length = strlen(password[count]);
    }

    count++; 
}

// Had to create a third function because I used recursion in upper functions and that,
// was creating problem as all together in one function. That's why!!
void registration(char username[20][20], char password[20][20])
{
    createUsername(username);
    createPassword(password);
}

// To check if login details are right
int checkUsername(char username[20][20], int count)
{
    char l_username[20];
    int flag = 0;

    printf("\nEnter your username: ");
    scanf("%s", &l_username);

    for(int i = 0; i < count; i++)
    {
        if(strcmp(l_username, username[i]) == 0)
        {
            flag = 1;
            return i;
        }
    }

    if(flag == 0)
    {
        printf("\nThis username doesn't exist in our database\n");
        printf("\nEnter a valid username to login\n");
        checkUsername(username, count);
    }
}

// To check if login details are right
void checkPassword(char username[20][20], char password[20][20], int count, int id)
{
    char l_password[20];
    int flag = 0;

    printf("\nEnter your password: ");
    scanf("%s", l_password);

    if(strcmp(l_password, password[id]) == 0)
    {
        system("cls");
        printf("\nWelcome %s\n", username[id]);
    }
    else
    {
        printf("\nEntered password is incorrect\n");
        printf("\nTry Again\n");
        checkPassword(username, password, count, id);
    }
}

// To login and do operations in your account
void login(char username[20][20], char password[20][20])
{
    char choice;
    int flag = 0; // To check if there is any data in account or not

    char name[20], DOB[20], rollNo[20];
    char phoneNo[20];
    int D, M, Y;

    int id = checkUsername(username, count);
    
    checkPassword(username, password, count, id);

    printf("\nWhat do you want to do in your account?\n");
    printf("\n1. Enter information\n");
    printf("\n2. Exit / LogOut\n");
    printf("\nEnter your choice: ");
    scanf("\n%c", &choice);

    switch(choice)
    {
        case '1':
            enterDetails(name, rollNo, phoneNo, D, M, Y);
            break;

        case '2':
            exit(0);
    }
}

// To input details in account 
void enterDetails(char name[20], char rollNo[20], char phoneNo[20], int D, int M, int Y)
{
    printf("\nEnter your name: ");
    scanf("%s", name);
    
    printf("\nEnter your roll no. : ");
    scanf("%s", rollNo);

    printf("\nEnter your date of birth (D/M/Y)\n");
    do
    {
        printf("\nDate: ");
        scanf("%d", &D);
        printf("\nMonth: ");
        scanf("%d", &M);
        printf("\nYear: ");
        scanf("%d", &Y);
    } while (!date(D, M, Y));
    
    isNoValid(phoneNo);

    printf("\nHere's your details\n");
    printf("\nYour name is: %s\n", name);
    printf("\nYour roll no. : %s\n", rollNo);
    printf("\nYour date of birth is: %d/%d/%d\n", D, M, Y);
    printf("\nYour Phone No. is: %s \n\n", phoneNo);
}

// To input date of birth
int date(int D, int M, int Y)
{
    if(D < 1 || D > 31)
    {
        printf("\nInvalid Input\n");
        return 0;
    }
    else if(M < 1 || M > 12)
    {
        printf("\nInvalid Input\n");
        return 0;
    }
    else if(Y < 1000)
    {
        printf("\nInvald Input\n");
        return 0;
    }
    else if(M == 2)
    {
        if(D < 1 || D > 29)
        {
            printf("\nInvalid Input\n");
            return 0;
        }
    }

    return 1;
}

// To check if phone number is valid or not
void isNoValid(char phoneNo[20])
{
    int flag = 0;
    int c;

    while(flag == 0)
    {
        printf("\nEnter your phone number: ");
        scanf("%s", phoneNo);

        c = strlen(phoneNo);
        for(int i = 0; i < c; i++)
        {
            if(!isdigit(phoneNo[i]))
            {
                printf("\nInvlaid Phone No.\n");
                break;
            }
        }

        if(c == 10)
        {
            flag = 1;
        }
        else
        {
            printf("\nInvalid Phone No.\n");
        }
    }
}

