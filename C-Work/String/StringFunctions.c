/*
Use of strlen
*/

#include <stdio.h>
#include <string.h>

// Function to add space in between concatenated strings
void Add_Space_In_Between(char a[], int n)
{
    char space[2] = " ";

    strcat(a, space);
}

int main()
{
    // char a[20];
    // printf("Enter a sentence: ");
    // gets(a);

    // printf("\nYour sentence was: ");
    // puts(a);

    // // 1.  To calulate the length of entered string (strlen)
 
    // int n = strlen(a);
    
    // printf("\nLength of your string is: %d\n", n);

    // // 2. To append one string at the end of another (strcat)

    // char b[20];

    // printf("\nEnter another string: ");
    // gets(b);

    // Add_Space_In_Between(a, n);

    // printf("\nAfter using strcat: ");
    // puts(strcat(a,  b));

    // // 3. To append first n characters of a string at the end of another (strncat)

    // char c[20], d[20];

    // printf("\nEnter another string: ");
    // gets(c);

    // printf("\nEnter one more string: ");
    // gets(d);

    // int count;

    // printf("\nEnter how long sentence you need: ");
    // scanf("%d", &count);

    // printf("\nString C: ");
    // puts(c);

    // printf("\nString D: ");
    // puts(d);

    // printf("\n");
    // puts(strncat(c, d, 5));
    // printf("\n");

    // 4. Compares two strings (strcmp)

    char e[20], f[20];

    printf("\nEnter another string: ");
    gets(e);

    printf("\nEnter one more string: ");
    gets(f);

    printf("\nString C: ");
    puts(e);

    printf("\nString D: ");
    puts(f);

    int i = strcmp(e, "Long");
    int j = strcmp(e, f);

    printf("\n%d\n\n%d\n", i, j);

    return 0;
}