#include <iostream>
#include "myFirstClass.h"
#include "customer.h"

int main()
{
    myFirstClass mfc= myFirstClass();
    mfc.printHello();
    std::cout << "ID " << "NAME" << " MONEY ($)" << std::endl;

    customer cst1= customer(); 
    cst1.ID=1;
    cst1.name="Qui";
    cst1.money=1000;
    std::cout << cst1.ID << "  " << cst1.name << "   " << cst1.money << std::endl;

    customer cst2= customer(); 
    cst2.ID=2;
    cst2.name="Quo";
    cst2.money=1000;
    std::cout << cst2.ID << "  " << cst2.name << "   " << cst2.money << std::endl;
    
    customer cst3= customer(); 
    cst3.ID=3;
    cst3.name="Qua";
    cst3.money=1000;
    std::cout << cst3.ID << "  " << cst3.name << "   " << cst3.money << std::endl;
   
    std::cout << "\n----- AFTER SHOPPING -----\n" << std::endl;
    
    float purchase1 = cst1.money-350+400; // 1 thing costing 350$ and adds 400$
    float purchase2 = cst2.money-37*10;   // 37 items each one costing 10$
    float purchase3 = cst3.money-3*500;   // 3 items each one costing 500$

    std::cout << "ID " << "NAME" << " MONEY ($)" << std::endl;
    std::cout << cst1.ID << "  " << cst1.name << "   " << purchase1 << std::endl;
    std::cout << cst2.ID << "  " << cst2.name << "   " << purchase2 << std::endl;
    std::cout << cst3.ID << "  " << cst3.name << "  "  << purchase3 << std::endl;

    std::cout << "--------------------------"<< std::endl;
    
    return 0;
}