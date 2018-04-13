#include "complexNumber.h"
#include <cmath>

//default constructor
//complexNumber::complexNumber()
//{
//    m_a=0;
//    m_b=0;
//}//end of complexNumber::complexNumber()

//another constructor
complexNumber::complexNumber(double re, double im)
{
    m_a=re;
    m_b=im;
}//end of complexNumber::complexNumber()

//get the Norm of complex complexNumber
double complexNumber::getNorm()
{
    double norm=sqrt(pow(m_a,2)+pow(m_b,2));
    return norm;
}//end of complexNumber::getNorm()

void complexNumber::sum(complexNumber b)
{
    m_a+=b.getRealPart();
    m_b+=b.getImaginaryPart();
    return;
}

complexNumber complexNumber::getSumWith(complexNumber c)
{
    complexNumber out= complexNumber(m_a+c.getRealPart(), m_b+c.getImaginaryPart());
    return out;
}

complexNumber complexNumber::operator+(complexNumber &c)
{
//     complexNumber out= complexNumber(m_a+c.getRealPart(), m_b+c.getImaginaryPart());
//     return out; comment this to avoid copy-past pieces of code You have to use the next line
    return this->getSumWith(c);
}