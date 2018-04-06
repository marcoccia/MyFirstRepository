#include <iostream>
#include "myFirstClass.h"

int main()
{
    std::cout << "welcome in myFirstExamples!" << std::endl;

    myFirstClass mfc= myFirstClass();
    mfc.printHello();
    
    return 0;
}