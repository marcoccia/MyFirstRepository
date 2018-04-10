#include <iostream>

class Particle{
    
    public:
        Particle();
        double E; //energy
        double px;
        double py;
        double pz;
        double mu_mass;
        double el_mass;
        double pi_mass;
        std::string type;
};