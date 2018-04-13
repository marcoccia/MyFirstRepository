#include <iostream>
#include "complexNumber.h"

int main ()
{
    complexNumber c= complexNumber(1,3);
    std::cout<<" c is "<<c.getRealPart()<<" +i*"<<c.getImaginaryPart()<<" with norm "<<c.getNorm()<<std::endl;
    
    complexNumber d= complexNumber(2,4);
    std::cout<<" d is "<<d.getRealPart()<<" +i*"<<d.getImaginaryPart()<<" with norm "<<d.getNorm()<<std::endl;
    
//     d.sum(c);
//     std::cout<<" Now d is "<<d.getRealPart()<<" +i*"<<d.getImaginaryPart()<<" with norm "<<d.getNorm()<<std::endl;

    complexNumber e=d.getSumWith(c);
    std::cout<<" e is "<<e.getRealPart()<<" +i*"<<e.getImaginaryPart()<<" with norm "<<e.getNorm()<<std::endl;
    
    complexNumber f=c+d;
    std::cout<<" f is "<<f.getRealPart()<<" +i*"<<f.getImaginaryPart()<<" with norm "<<f.getNorm()<<std::endl;
    
    
    return 0;
}