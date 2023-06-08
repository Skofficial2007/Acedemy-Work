/*
Write a C program to find determinant of a matrix. 
*/

#include <iostream>

int main()
{
    int a[3][3], det = 0, i, j, k;
    std::cout << "Enter the elements of the matrix: " << std::endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cin >> a[i][j];
        }
    }


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                det = det + a[i][j];
            }
            else
            {
                det = det + a[i][j] * a[j][i];
            }
        }
    }

    std::cout << "The determinant of the matrix is: " << det << std::endl;

    return 0;
}