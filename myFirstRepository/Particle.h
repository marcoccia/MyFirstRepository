#include <iostream>
#include <cmath>

class Particle{ 

    public:
         
        enum ParticleType{ 
            UNKNOWN=0,
            ELECTRON=1, 
            MUON=2,
            PION=3
            };
            
    Particle(Particle::ParticleType type, int q, double px, double py, double pz);
//     void getEnergy(double energy){
//         energy=sqrt(pow(m_mass,2)+pow(m_px,2)+pow(m_py,2)+pow(m_pz,2));
//     };
        
    private:
        ParticleType m_type;
        double m_px, m_py, m_pz, m_mass, m_q;

};
  
// class Particle{
//     
//     public:
//         Particle();
//         double E; //energy
//         double px;
//         double py;
//         double pz;
//         double mu_mass;
//         double el_mass;
//         double pi_mass;
//         std::string type;
// };

