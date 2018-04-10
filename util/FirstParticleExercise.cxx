#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include "myFirstClass.h"
#include "Particle.h"
using namespace std;

int main()
{
    Particle par= Particle();
    
    int rowcount=0;
    int el_plus  = 0,  mu_plus = 0, pi_plus  = 0,
        el_minus = 0, mu_minus = 0, pi_minus = 0;
    
    double ptot=-999., energy=-999., c=1;
    ifstream myfile ("/data/Tutorial_lorenzo_05/myFirstRepository/particle_list.txt");
    string line, charge_string, px_string, py_string, pz_string;
    vector <string> v;
	
    if (myfile.is_open()){
		
        while ( getline (myfile,line) ){
            rowcount++;
            if (rowcount>2){ //skip the first two lines
                istringstream buf(line);
                vector <string> v;
                for(string word; buf >> word; ) v.push_back(word);			
                par.type      = v[0];
                charge_string = v[1];
                px_string     = v[2];
                py_string     = v[3];
                pz_string     = v[4];
            
                par.px=atof(px_string.c_str());
                par.py=atof(py_string.c_str());
                par.pz=atof(pz_string.c_str());
                ptot= sqrt(pow(par.px,2)+pow(par.py,2)+pow(par.pz,2));
                if ( par.type=="electron" ) {
                    energy=sqrt(pow(par.el_mass,2)*pow(c,4)+pow(ptot,2)*pow(c,2));
                    if(energy>300. && charge_string == "1" ) el_plus++;
                    else if (energy>300. && charge_string == "-1") el_minus++;
                }
                if ( par.type=="muon" ) {
                    energy=sqrt(pow(par.el_mass,2)*pow(c,4)+pow(ptot,2)*pow(c,2));
                    if(energy>300. && charge_string == "1" ) mu_plus++;
                    else if (energy>300. && charge_string == "-1") mu_minus++;
                }
                if ( par.type=="pion" ) {
                    energy=sqrt(pow(par.el_mass,2)*pow(c,4)+pow(ptot,2)*pow(c,2));
                    if(energy>300. && charge_string == "1" ) pi_plus++;
                    else if (energy>300. && charge_string == "-1") pi_minus++;
                }
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
	
    //std::cout << "\n----------\n" << std::endl;
    return 0;
}