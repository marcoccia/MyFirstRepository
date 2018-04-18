#ifndef _LORENTZMOMENTUM_CXX
#define _LORENTZMOMENTUM_CXX

#include "LorentzMomentum.h"
#include<iostream>
#include <cmath>

using namespace std;

LorentzMomentum::LorentzMomentum()
{
    m_px=0;
    m_py=0;
    m_pz=0;
    m_mass=0;
}
LorentzMomentum::LorentzMomentum(double px, double py, double pz, double mass)
{
    m_px=px;
    m_py=py;
    m_pz=pz;
    m_mass=mass;
}

LorentzMomentum LorentzMomentum::operator+(LorentzMomentum &c)
{
    LorentzMomentum out2= LorentzMomentum(m_px+c.getPx(), m_py+c.getPy(), m_pz+c.getPz(), m_mass+c.getM() );
    return out2;
}

double LorentzMomentum::operator*(LorentzMomentum &d)
{
    double out3= double(sqrt(pow(m_mass,2)+pow(m_px,2)+pow(m_py,2)+pow(m_pz,2))*d.getE() - m_px*d.getPx() - m_py*d.getPy() - m_pz*d.getPz());
    return out3;
}

#endif