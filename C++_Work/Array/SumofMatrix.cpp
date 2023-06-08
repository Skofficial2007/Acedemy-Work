/*
Write a C program to add two matrices. 
*/

#include <iostream>

int main()
{
    int a[3][3], b[3][3], c[3][3];
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
            std::cout << "Enter b[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> b[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }


    std::cout << "The sum of the two matrices is: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}