#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include "myFirstClass.h"
#include "Particle.h"    
#include "LorentzMomentum.h"

using namespace std;

int main()
{
    int rowcount=0;
    int el_plus  = 0,  mu_plus = 0, pi_plus  = 0,
        el_minus = 0, mu_minus = 0, pi_minus = 0;
    
//    double ptot=-999., energy=-999., c=1;
    ifstream myfile ("/data/Tutorial_lorenzo_05/myFirstRepository/particle_list.txt");
    string line, type_string, charge_string, px_string, py_string, pz_string;
    vector <string> v;
	
    if (myfile.is_open()){
		
        while ( getline (myfile,line) ){
            rowcount++;
            if (rowcount>2){ //skip the first two lines
                istringstream buf(line);
                vector <string> v;
                for(string word; buf >> word; ) v.push_back(word);			
                type_string      = v[0];
                charge_string = v[1];
                px_string     = v[2];
                py_string     = v[3];
                pz_string     = v[4];
            
                 if ( type_string=="electron" && charge_string=="-1" ) {
                    Particle *myElectron = new Particle(Particle::ELECTRON, atof(charge_string.c_str()), atof(px_string.c_str()), atof(py_string.c_str()), atof(pz_string.c_str()) );
                    
                    
//                     energy=sqrt(pow(par.el_mass,2)*pow(c,4)+pow(ptot,2)*pow(c,2));
//                     if(energy>300. && charge_string == "1" ) el_plus++;
//                     else if (energy>300. && charge_string == "-1") el_minus++;
                 }
//                 if ( par.type=="muon" ) {
//                     Particle *myMuon = new Particle(Particle::MUON, atof(px_string.c_str()), atof(py_string.c_str()), atof(pz_string.c_str()) );
                    
//                     energy=sqrt(pow(par.el_mass,2)*pow(c,4)+pow(ptot,2)*pow(c,2));
//                     if(energy>300. && charge_string == "1" ) mu_plus++;
//                     else if (energy>300. && charge_string == "-1") mu_minus++;
//                 }
//                 if ( par.type=="pion" ) {
//                     Particle *myPion = new Particle(Particle::PION, atof(px_string.c_str()), atof(py_string.c_str()), atof(pz_string.c_str()) );
                    
//                     energy=sqrt(pow(par.el_mass,2)*pow(c,4)+pow(ptot,2)*pow(c,2));
//                     if(energy>300. && charge_string == "1" ) pi_plus++;
//                     else if (energy>300. && charge_string == "-1") pi_minus++;
//                 }
            }
        }
            myfile.close();	
            
            std::cout << " \n----- 300 MeV Thereshold --------" << std::endl;
            std::cout << "Number of e-  =  " << el_minus << std::endl;
            std::cout << "Number of e+  =  " << el_plus << std::endl;
            std::cout << "Number of mu- =  " << mu_minus << std::endl;
            std::cout << "Number of mu+ =  " << mu_plus << std::endl;
            std::cout << "Number of pi- =  " << pi_minus << std::endl;
            std::cout << "Number of pi+ =  " << pi_plus << std::endl;
            std::cout << " ---------------------------------" << std::endl;
    }
    else cout<<"NOT FOUND"<<endl;
 
    LorentzMomentum vec1=LorentzMomentum(4,3,0,0);
    LorentzMomentum vec2=LorentzMomentum(2,1,0,0);
    LorentzMomentum vec_sum=vec1+vec2;
    double scal=0.;
    scal=vec1*vec2;

    std::cout<< vec_sum.getPx() <<std::endl;
    std::cout<< scal <<std::endl;
 
//     Particle *myMuon = new Particle(Particle::MUON,...);
//     Particle *myElectron = new Particle(Particle::ELECTRON,...)
    
//     std::vector<LorentzMomentum*> vec1;
//     std::vector<LorentzMomentum*> vec2;
//     std::vector<LorentzMomentum*> vec_sum;
// 
//     vec1.push_back(new LorentzMomentum(1,1));
//     vec1.push_back(new LorentzMomentum(2,2));
//     vec2.push_back(new LorentzMomentum(3,3));
//     vec2.push_back(new LorentzMomentum(4,4));
//     
//     vec_sum=vec1+vec2;
//     std::cout<< vec_sum[0] <<std::endl;
    
    return 0;
}