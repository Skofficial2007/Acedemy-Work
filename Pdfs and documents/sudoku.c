/*
Sudoku
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

const int EMPTY_VALUE = 0;
const int PUZZLE_SIZE = 9;
int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int numberOfSolution = 1;

typedef int bool;
#define true 1
#define false 0

bool clear = true;

void setCursorPosition(int x, int y)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(hOut, coord);
}

void sleep(int miliseconds)
{
    clock_t start_time = clock();
    while(clock() < start_time + miliseconds);
}

void printPuzzle(int puzzle[PUZZLE_SIZE][PUZZLE_SIZE], bool clear)
{
    if (clear)
    {
        setCursorPosition(0, 0);
    }
    char text[100], separator[100], padding[100];
    
    for (int i = 0; i < PUZZLE_SIZE; i++)
    {
        sprintf(text, "|");
        sprintf(separator, " -");
        sprintf(padding, "|");
        for (int j = 0; j < PUZZLE_SIZE; j++)
        {
            char value[10];
            if (puzzle[i][j] == EMPTY_VALUE)
            {
                strcpy(value, " ");
            }
            else
            {
                sprintf(value, "%d", puzzle[i][j]);
            }
            sprintf(text, "%s  %s  |", text, value);
            sprintf(separator, "%s------", separator);
            sprintf(padding, "%s     |", padding);
            if (j % 3 == 2 && j != PUZZLE_SIZE - 1)
            {
                sprintf(text, "%s|", text);
                sprintf(padding, "%s|", padding);
            }
        }
        if (i != 0 && i % 3 == 0)
        {
            for (int k = 0; k < strlen(separator); k++)
            {
                if (separator[k] == '-')
                {
                    separator[k] = '=';
                }
            }
        }
        printf("%s\n%s\n%s\n%s\n", separator, padding, text, padding);
    }
    printf("%s\n", separator);
}

int isValid(int puzzle[PUZZLE_SIZE][PUZZLE_SIZE], int row, int col, int value)
{
    int c, r, startRow, startCol;

    for (c = 0; c < PUZZLE_SIZE; c++)
    {
        if (puzzle[row][c] == value)
            return 0;
    }

    for (r = 0; r < PUZZLE_SIZE; r++)
    {
        if (puzzle[r][col] == value)
            return 0;
    }

    startRow = floor(row / 3) * 3;
    startCol = floor(col / 3) * 3;

    for (r = startRow; r < startRow + 3; r++)
    {
        for (c = startCol; c < startCol + 3; c++)
        {
            if (puzzle[r][c] == value)
                return 0;
        }
    }

    return 1;
}

int hasEmptyCell(int puzzle[PUZZLE_SIZE][PUZZLE_SIZE])
{
    int r, c;

    for (r = 0; r < PUZZLE_SIZE; r++)
    {
        for (c = 0; c < PUZZLE_SIZE; c++)
        {
            if (puzzle[r][c] == EMPTY_VALUE)
                return 1;
        }
    }

    return 0;
}

void copyPuzzle(int origin[PUZZLE_SIZE][PUZZLE_SIZE], int copy[PUZZLE_SIZE][PUZZLE_SIZE])
{
    int r, c;

    for (r = 0; r < PUZZLE_SIZE; r++)
    {
        for (c = 0; c < PUZZLE_SIZE; c++)
        {
            copy[r][c] = origin[r][c];
        }
    }
}

void shuffle(int arr[], int n)
{
    // Seed the random number generator using the current time.
    srand(time(NULL));

    // Iterate over the array in reverse order.
    for (int i = n - 1; i > 0; i--)
    {
        // Generate a random index j between 0 and i (inclusive).
        int j = rand() % (i + 1);

        // Swap the elements at indices i and j.
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

bool fillPuzzle(int puzzle[PUZZLE_SIZE][PUZZLE_SIZE])
{
    int row, col;
    for (int i = 0; i < PUZZLE_SIZE * PUZZLE_SIZE; i++)
    {
        row = floor(i / PUZZLE_SIZE);
        col = i % PUZZLE_SIZE;
        if (puzzle[row][col] == EMPTY_VALUE)
        {
            shuffle(values, PUZZLE_SIZE);
            for (int j = 0; j < PUZZLE_SIZE; j++)
            {
                if (isValid(puzzle, row, col, values[j]))
                {
                    puzzle[row][col] = values[j];
                    if (!hasEmptyCell(puzzle) || fillPuzzle(puzzle))
                    {
                        return true;
                    }
                }
            }
            break;
        }
    }
    puzzle[row][col] = EMPTY_VALUE;
    return false;
}

bool solveSudoku(int puzzle[PUZZLE_SIZE][PUZZLE_SIZE], bool visualize)
{
    int row, col;
    for (int i = 0; i < PUZZLE_SIZE * PUZZLE_SIZE; i++)
    {
        row = floor(i / PUZZLE_SIZE);
        col = i % PUZZLE_SIZE;
        if (puzzle[row][col] == EMPTY_VALUE)
        {
            for (int value = 1; value <= PUZZLE_SIZE; value++)
            {
                if (isValid(puzzle, row, col, value))
                {
                    puzzle[row][col] = value;
                    if (visualize)
                    {
                        sleep(100);
                        printPuzzle(puzzle, 1);
                    }
                    if (!hasEmptyCell(puzzle))
                    {
                        numberOfSolution++;
                        if (visualize)
                        {
                            sleep(100);
                            printPuzzle(puzzle, 1);
                            return true;
                        }
                        break;
                    }
                    else if (solveSudoku(puzzle, visualize))
                    {
                        return true;
                    }
                }
            }
            break;
        }
    }
    puzzle[row][col] = EMPTY_VALUE;
    if (visualize)
    {
        sleep(100);
        printPuzzle(puzzle, 1);
    }
    return false;
}

void generatePuzzle(int puzzle[PUZZLE_SIZE][PUZZLE_SIZE],int difficulty)
{
    int i, j, row, col, attempt, backupValue;
    for (i = 0; i < PUZZLE_SIZE; i++)
    {
        for (j = 0; j < PUZZLE_SIZE; j++)
        {
            puzzle[i][j] = EMPTY_VALUE;
        }
    }
    fillPuzzle(puzzle);
    srand((unsigned)time(NULL));
    attempt = difficulty;
    while (attempt > 0)
    {
        row = floor(rand() % PUZZLE_SIZE);
        col = floor(rand() % PUZZLE_SIZE);
        while (puzzle[row][col] == EMPTY_VALUE)
        {
            row = floor(rand() % PUZZLE_SIZE);
            col = floor(rand() % PUZZLE_SIZE);
        }
        backupValue = puzzle[row][col];
        puzzle[row][col] = EMPTY_VALUE;
        numberOfSolution = 0;
        solveSudoku(puzzle, 0);
        if (numberOfSolution != 1)
        {
            puzzle[row][col] = backupValue;
            attempt--;
        }
    }
}

int main(int argc, char **argv) {
    int puzzle[PUZZLE_SIZE][PUZZLE_SIZE];
    int origin[PUZZLE_SIZE][PUZZLE_SIZE];
    generatePuzzle(puzzle, 1);
    copyPuzzle(puzzle, origin);
    system("cls");
    printPuzzle(puzzle, 1);
    char run[2];
    printf("solve puzzle (Y/n) ");
    scanf("%s", run);
    if (strcmp(run, "n") == 0 || strcmp(run, "N") == 0) {
        fflush(stdout);
        return 0;
    }
    solveSudoku(puzzle, 1);
    printPuzzle(origin, 0);
    fflush(stdout);
    return 0;
}

/*
 ------------------------------------------------------- 
|     |  8  |  3  ||     |     |     ||     |     |  9  |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
|     |     |     ||     |     |     ||     |     |     |
|     |  5  |     ||  2  |     |     ||     |  8  |  3  |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
|     |     |     ||     |     |     ||     |     |     |
|  2  |     |  6  ||     |  8  |     ||  4  |     |     |
|     |     |     ||     |     |     ||     |     |     |
 ======================================================= 
|     |     |     ||     |     |     ||     |     |     |
|  5  |     |     ||  8  |     |     ||     |     |     |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
|     |     |     ||     |     |     ||     |     |     |
|     |     |     ||  6  |  1  |     ||     |  7  |     |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
|     |     |     ||     |     |     ||     |     |     |
|     |     |  9  ||     |     |     ||  3  |     |     |
|     |     |     ||     |     |     ||     |     |     |
 ======================================================= 
|     |     |     ||     |     |     ||     |     |     |
|     |     |  8  ||  1  |     |  5  ||  9  |     |     |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
|     |     |     ||     |     |     ||     |     |     |
|  6  |     |  2  ||  9  |     |     ||     |  3  |  5  |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
|     |     |     ||     |     |     ||     |     |     |
|  9  |  4  |  5  ||     |  2  |  8  ||     |  1  |     |
|     |     |     ||     |     |     ||     |     |     |
 ------------------------------------------------------- 
solve puzzle (Y/n)
*/