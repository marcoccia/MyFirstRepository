#include "LorentzMomentum.h"
#include <cmath>

LorentzMomentum::LorentzMomentum(double en, double mom_x, double mom_y, double mom_z)
{
    m_e=en;
    m_px=mom_x;
    m_py=mom_y;
    m_pz=mom_z;
}

LorentzMomentum LorentzMomentum::operator+(LorentzMomentum &c)
{
    LorentzMomentum out2= LorentzMomentum(m_e+c.getEnergy(), m_px+c.getPx(), m_py+c.getPy(), m_pz+c.getPz());
    return out2;
}

double LorentzMomentum::operator*(LorentzMomentum &d)
{
    double out3= double(m_e*d.getEnergy() - m_px*d.getPx() - m_py*d.getPy() - m_pz*d.getPz());
    return out3;
}
//    LorentzMomentum out2= LorentzMomentum(sqrt(pow(m_e,2)+pow(c.getEnergy(),2)), sqrt(pow(m_p,2)+pow(c.getPtot(),2)));
