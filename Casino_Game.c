/*
Input a number a from user of any given digits 
-> if a digit perfectly match a number in array then print it right away
-> if it's completely wrong then delete it
-> if it's at wrong place then give a hint for it
No of chances will be equal to number of digits
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// To create a random number according to level of difficulty and save the digits in the array
int randomizer(int *difficulty, int *num, int a[], int *count)
{
    int temp, i;
    srand(time(NULL));

    if(*difficulty == 1)
    {
        do
        {
            temp = rand()%1000;
        } while (temp < 100);

        i = 2;
        *count = 3;
    }
    else if(*difficulty == 2)
    {
        do
        {
            temp = rand()%10000;
        } while (temp < 1000);

        i = 3;
        *count = 4;
    }
    else if(*difficulty == 3)
    {
        do
        {
            temp = rand()%100000;
        } while (temp < 10000);

        i = 4;
        *count = 5;
    }
    else
    {
        *difficulty = 1;
        do
        {
            temp = rand()%1000;
        } while (temp < 100);

        i = 2;
        *count = 3;
    }

    *num = temp;

    while(temp != 0)
    {
        a[i] = temp%10;
        temp /= 10;
        i--;
    }
}

// To select a level of difficulty
int selectDifficulty(int *difficulty, int *limit)
{
    int temp = *difficulty;
    printf("\nLevel of difficulties are: \n");
    printf("1. Level 1\n");
    printf("2. Level 2\n");
    printf("3. Level 3\n");

    printf("\nEnter the level of difficulty you want: ");
    scanf("%d", &temp);

    while(temp <= 0 || temp > 3)
    {
        printf("\nInvalid Difficulty\n");
        printf("\nEnter again: ");
        scanf("%d", &temp);
    }

    if(temp == 1)
    {
        *limit = 3;
    }
    else if(temp == 2)
    {
        *limit = 4;
    }
    else
    {
        *limit = 5;
    }

    *difficulty = temp;
}

// To check if input is of valid digits or not
int checkInput(int input, int digits)
{
    int temp = input;
    int count = 0;
    while(temp != 0)
    {
        count++;
        temp /= 10;
    }

    if(count == digits)
    {
        return 1;
    }
    else
    {
        printf("\nInvalid Input");
        return 0;
    }
}

// To save the input in a array
int SaveInArray(int a[], int *input, int *digits)
{
    int temp = *input;
    int i = *digits - 1;

    while(temp != 0)
    {
        a[i] = temp%10;
        temp /= 10;
        i--;
    }
}

// To take a input, check it and then save it in a array
int ToInput(int inputArray[], int *input, int *digits)
{
    int temp1 = *input;
    int temp2 = *digits;

    do
    {
        printf("\nInput a number of digits %d: ", temp2);
        scanf("%d", &temp1);
    } while (checkInput(temp1, temp2) == 0);

    *input = temp1;

    SaveInArray(inputArray, &temp1, &temp2);
}

// To check the input in campare to the given
void perfectInput(int array[], int inputArray[], int digits, int perfectPosition[], int *k)
{
    int count = *k;

    for(int i = 0; i < digits; i++)
    {
        if(array[i] == inputArray[i])
        {
            // printf("\nPerfect Input: %d at %d\n", array[i], i);
            perfectPosition[count] = i;
            count++;
        }
    }

    *k = count;
}

// To find input numbers at wrong position and give a hint
void rightInput_wrongPos(int array[], int inputArray[], int digits)
{
    int flag = 0;
    printf("\n\nThe position shown as stars are completely wrong, try something else\n");

    for(int i = 0; i < digits; i++)
    {
        for(int j = 0; j < digits; j++)
        {
            if(array[i] == inputArray[j])
            {
                if(i != j)
                {
                    if(flag != 1)
                    {
                        printf("\nNumbers at wrong position and hints to fix them: \n");
                        printf("\n======================================================\n");
                        flag = 1;
                    }

                    printf("\nInputed number %d is right but the position is wrong\n", array[i]);
                    
                    if(i < j)
                    {
                        printf("\nNumber %d should be on futher left\n", array[i]);
                    }
                    else
                    {
                        printf("\nNumber %d should be on futher right\n", array[i]);
                    }

                    printf("\n======================================================\n");
                }
            }
        }
    }
}

// To print the hidden number to find
void question(int array[], int digits, int perfectPosition[], int k, int inputArray[])
{
    int p = 0;

    for(int i = 0; i < digits; i++)
    {
        if(i == perfectPosition[p])
        {
            printf(" %d ", array[i]);
            for(int j = 0; j < k; j++)
            {
                perfectPosition[j] = perfectPosition[j+1];
            }
        }
        else
        {
            printf(" * ");
        }
    }
}

void mainGame(int num, int array[], int difficulty, int digits, int k, int input, int inputArray[], int perfectPosition[])
{
    int lives = 0;
    k = 0;
    srand(time(NULL));

    selectDifficulty(&difficulty, &lives);
    randomizer(&difficulty, &num, array, &digits);

    printf("\n\n");
    question(array, digits, perfectPosition, k, inputArray);

// --------------------------------------------------------------
    printf("\n\n");
    printf("\nYour array in main is: ");
    for(int i = 0; i < digits; i++)
    {
        printf(" %d ", array[i]);
    }
//--------------------------------------------------------------

    do
    {
        ToInput(inputArray, &input, &digits);
        system("cls");

        perfectInput(array, inputArray, digits, perfectPosition, &k);

        printf("\nAfter Input:");
        question(array, digits, perfectPosition, k, inputArray);

        if(input != num)
        {
            rightInput_wrongPos(array, inputArray, digits);

            for(int i = 0; i < 10; i++)
            {
                inputArray[i] = 0;
                perfectPosition[i] = 0;
            }
        }

        k = 0;
        lives--;
    }
    while (input != num && lives != 0);
    system("cls");

    if(lives == 0)
    {
        system("cls");
        printf("\n\n========================\n\n");
        printf("\n\tYou Lose\t\n");
        printf("\n\n========================\n\n");
    }
    else
    {
        system("cls");
        printf("\n\n========================\n\n");
        printf("\n\tYou Won\t\n");
        printf("\n\n========================\n\n");
    }
}

int main()
{
    int num, array[10], difficulty, digits, k;
    int input, inputArray[10];
    int perfectPosition[10];
    char ch;

    printf("\n\n\t\tWELCOME\t\n\n");
    printf("\nGame rule are simple here: \n");
    printf("\n-> You will be choosing the difficulty first & acc. to that difficulty you will be given a number which you have to guess.\n");
    printf("\n-> Acc. to your input we will tell which digit of given number you got right.\n");
    printf("\n-> If the answer came as 2 * 4 * * or anything else then it means you got some number right while other wrong.\n");
    printf("\n-> From the wrong number we will give you a hint which will help you to find other numbers\n");
    printf("\n-> You will also have a number of tries/lives and every input will cost you a try/life\n");
    printf("\n\n---------------------------");
    printf("\n\nPress any key to Start");
    printf("\n\n---------------------------");
    printf("\n\nHere -> ");
    getchar();
    system("cls");
    
    mainGame(num, array, difficulty, digits, k, input, inputArray, perfectPosition);

    printf("\n\nEnter any character to quit: ");
    scanf("\n%c", &ch);

    return 0;
}