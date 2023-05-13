/*
Casino Game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void randomNumber(int *n, int a[])
{
    srand(time(NULL));
    int num;

    do
    {
        num = rand()%5000;
    }
    while(num < 1000);

    *n = num;

    int temp = num;
    int i = 3;

    while(temp != 0)
    {
        a[i] = temp%10;
        temp /= 10;
        i--;
    }
}

void randomlyDelete(int *n1, int *n2, int num)
{
    int t1, t2;
    srand(time(NULL));

    do
    {
        t1 = rand()%4;
    } while (t1 < 0);

    do
    {
        t2 = rand()%4;
    } while (t2 == t1 || t2 < 0);

    *n1 = t1;
    *n2 = t2;
}

void giveRandomNumber(int op[], int n1, int n2, int a[])
{
    int t;
    srand(time(NULL));

    for(int i = 0; i < 6; i++)
    {
        do
        {
            t = rand()%10;
        } while (t < 0 || t == op[i-1]);

        op[i] = t;

        if(op[i-1] == a[n1] && op[i] == a[n2])
        {
            i--;
        }
    }
}

void randomLoc(int *loc)
{
    int temp;
    srand(time(NULL));
    
    do
    {
        temp = rand()%5;
    } while (temp < 1);

    *loc = temp;
}

int options(int n1, int n2, int a[])
{
    srand(time(NULL));
    int loc, t1 = 0, t2 = 0, count = 0;
    int op[6];
    randomLoc(&loc);

    for(int i = 1; i <= 4; i++)
    {
        giveRandomNumber(op, n1, n2, a);

        if(i == loc)
        {
            if(n1 < n2)
                printf("\n%d) %d, %d\n", i, a[n1], a[n2]);
            else
                printf("\n%d) %d, %d\n", i, a[n2], a[n1]);
        }
        else
        {   
            printf("\n%d) %d, %d\n", i, op[count], op[count+1]);
            count += 2;
        }
    }

    return loc;
}

int main()
{
    int num, n1, n2;
    int array[4];
    srand(time(NULL));

    randomNumber(&num, array);

    randomlyDelete(&n1, &n2, num);

    printf("\nYour number to guess is: ");
    for(int i = 0; i < 4; i++)
    {
        if(i == n1 || i == n2)
        {
            printf(" * ");
        }
        else
        {
            printf(" %d ", array[i]);
        }
    }

    int answer = options(n1, n2, array);
    int selected;

    printf("\n\nEnter Your Choice: ");
    scanf("%d", &selected);

    if(selected == answer)
    {
        printf("\nYOU WON\n");
    }
    else
    {
        printf("\nYOU LOSE\n");
    }

    return 0;
}