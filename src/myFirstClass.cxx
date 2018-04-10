#include "myFirstClass.h"
#include "customer.h"
#include "Particle.h"

customer::customer()
{
 ID=0;
 name="Qui";
 money=0.;
}

Particle::Particle()
{
E = -999.;
px= -999.;
py= -999.;
pz= -999.;
mu_mass= 105.658; //MeV
el_mass= 0.511;
pi_mass= 139.57;
type="part_type";
}

void myFirstClass::printHello()

{
std::cout<<"-----------\n"<<std::endl;
}

