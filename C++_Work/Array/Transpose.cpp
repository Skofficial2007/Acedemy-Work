/*
Write a C program to interchange diagonals of a matrix. 
*/

#include <iostream>

int main()
{
    int a[3][3], b[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << "Enter a[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                b[i][j] = a[i][j];
            }
            else
            {
                b[i][j] = a[j][i];
            }
        }
    }

    std::cout << "Original Matrix: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Interchanged Matrix: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}