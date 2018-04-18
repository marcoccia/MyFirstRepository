#include <cmath>
using namespace std;
class LorentzMomentum{
    
    public:
        LorentzMomentum();
        LorentzMomentum(double px=0., double py=0., double pz=0, double m=0.); 
//         void setEnergy(double e){m_e=e;}
//         double getEnergy(){return m_e;}
        
        void setPx(double px){m_px=px;}
        void setPy(double py){m_py=py;}
        void setPz(double pz){m_pz=pz;}
        void setM (double m){m_mass=m;}
        double getE() const {return sqrt(pow(m_mass,2)+pow(m_px,2)+pow(m_py,2)+pow(m_pz,2));};
        double getPx() const {return m_px;}
        double getPy() const {return m_py;}
        double getPz() const {return m_pz;}
        double getM() const {return m_mass;}

        LorentzMomentum operator+(LorentzMomentum &c);
        double operator*(LorentzMomentum &d);
        
    private:
        
        double m_mass;
        double m_px;
        double m_py;
        double m_pz;
        
};