class LorentzMomentum{
    
    public:
       
        LorentzMomentum(double e=0., double px=0., double py=0., double pz=0.); 
        void setEnergy(double e){m_e=e;}
        double getEnergy(){return m_e;}
        void setPx(double px){m_px=px;}
        void setPy(double py){m_py=py;}
        void setPz(double pz){m_pz=pz;}
        double getPx(){return m_px;}
        double getPy(){return m_py;}
        double getPz(){return m_pz;}

        LorentzMomentum operator+(LorentzMomentum &c);
        double operator*(LorentzMomentum &d);
        
    private:
        
        double m_e;
        double m_px;
        double m_py;
        double m_pz;
        
};