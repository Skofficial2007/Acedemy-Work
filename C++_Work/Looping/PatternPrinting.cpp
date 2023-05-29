/*
Write a program to print the Following patterns:
*/

#include <iostream>

void star();
void same_num();
void con_num();
void con_con_num();
void same_alp();
void con_alp();
void con_con_alp();

int main()
{
    int n;
    std:: cout << "Enter your choice of design from following choices: \n";
    std:: cout << " 1.\t*\n\t**\n\t***\n\t****\n 2.\t1\n\t12\n\t123\n\t1234\n";
    std:: cout << " 3.\t1\n\t22\n\t333\n\t4444\n 4.\t1\n\t23\n\t456\n\t78910\n";
    std:: cout << " 5.\ta\n\tab\n\tabc\n\tabcd\n 6.\ta\n\tbb\n\tccc\n\tdddd\n";
    std:: cout << " 7.\ta\n\tbc\n\tdef\n\tghij\n 8.\tExit\n";

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
            {
                star();
                break;
            }
            case 2:
            {
                con_num();
                break;
            }
            case 3:
            {
                same_num();
                break;
            }
            case 4:
            {
                con_con_num();
                break;
            }
            case 5:
            {
                con_alp();
                break;
            }
            case 6:
            {
                same_alp();
                break;
            }
            case 7:
            {
                con_con_alp();
                break;
            }
            case 8:
            {
                exit(0);
                break;
            }
            default:
            {
                std:: cout << "Invalid Input" << std:: endl;
            }
        }
    }

    return 0;
}

void star()
{
    int n;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int a = 0; a < i; a++)
        {
            std:: cout << "*";
        }
        std:: cout << std:: endl;
    }
}

void same_num()
{
    int n, c = 1;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int a = 0; a < i; a++)
        {
            std:: cout << c;
        }
        c++;
        std:: cout << std:: endl;
    }
}

void con_num()
{
    int n, c;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        c = 1;
        for(int a = 0; a < i; a++)
        {
            std:: cout << c;
            c++;
        }
        std:: cout << std:: endl;
    }
}

void con_con_num()
{
    int n, c = 1;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int a = 0; a < i; a++)
        {
            std:: cout << c;
            c++;
        }
        std:: cout << std:: endl;
    }
}

void same_alp()
{
    int n, c = 97;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int a = 0; a < i; a++)
        {
            char ch =static_cast<char>(c);
            std:: cout << ch;
        }
        c++;
        std:: cout << std:: endl;
    }
}

void con_alp()
{
    int n;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int c = 97;
        for(int a = 0; a < i; a++)
        {
            char ch =static_cast<char>(c);
            std:: cout << ch;
            c++;
        }
        std:: cout << std:: endl;
    }
}

void con_con_alp()
{
    int n, c = 97;
    std:: cout << "Enter how big you want your triangle: ";
    std:: cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int a = 0; a < i; a++)
        {
            char ch =static_cast<char>(c);
            std:: cout << ch;
            c++;
        }
        std:: cout << std:: endl;
    }
}