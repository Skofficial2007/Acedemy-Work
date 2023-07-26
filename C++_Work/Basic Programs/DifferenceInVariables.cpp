#include <iostream>
int globalVariable = 10;

void localScopeExample()
{
    int localVariable = 5;
    static int staticVariable = 7;
    std::cout << "Local variable: " << localVariable << std::endl;
    std::cout << "Global variable: " << globalVariable << std::endl;
    std::cout << "Static variable: " << staticVariable << std::endl;
    localVariable++;
    globalVariable++;
    staticVariable++;
    std::cout << "Values Updated" << std::endl;
}

int main()
{
    std::cout << "1st Function Call -> " << std::endl;
    localScopeExample();
    std::cout << "\n2nd Function Call -> " << std::endl;
    localScopeExample();
    std::cout << "\nGlobal variable call in main: " << globalVariable << std::endl;
    return 0;
}