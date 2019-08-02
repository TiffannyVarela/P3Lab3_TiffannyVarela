#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef OREJA_CPP
#define OREJA_CPP
using namespace std;

class Oreja{
	private:
		string tamanio;
		double cap_audicion;
		
	public:
		Oreja(){
		}
		
		Oreja(string tamanio, double cap_audicion){
			this->tamanio=tamanio;
			this->cap_audicion=cap_audicion;
		}
		
		string getTamanio(){
			return this->tamanio;
		}
		
		void setTamanio(string tamanio){
			this->tamanio.assign(tamanio);
		}
		
		double getCap_audicion(){
			return this->cap_audicion;
		}
		
		void setCap_audicion(double cap_audicion){
			this->cap_audicion=cap_audicion;
		}
		
		void printOreja(){
			cout<<setw(10)<<"Orejas:";
			cout<<setw(10)<<"Tamanio: "<<tamanio;
			cout<<setw(10)<<"Capacidad de Audicion: "<<cap_audicion<<endl;
		}
};

#endif
