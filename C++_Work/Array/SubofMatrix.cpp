/*
Write a C program to subtract two matrices.
*/

#include <iostream>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    std::cout << "Enter the elements of the first matrix: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cin >> a[i][j];
        }
    }
    std::cout << "Enter the elements of the second matrix: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cin >> b[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    std::cout << "Subtraction of A - B matrix is: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << " " << c[i][j];
        }
        std::cout << std:: endl;
    }

    return 0;
}