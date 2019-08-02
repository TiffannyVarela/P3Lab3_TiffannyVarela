#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Animal.cpp"

#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP

using namespace std;

class Zoologico{
	
	private:
		string nombre, tamanio;
		int cap_personas;
		vector<Animal*> artica;
		vector<Animal*> desertica;
		vector<Animal*> jungla;
		vector<Animal*> sabana;
		
	public: 
		Zoologico();
		
		Zoologico(string nombre, string tamanio, int cap_personas){
			this->nombre=nombre;
			this->tamanio=tamanio;
			this->cap_personas;
		}
		
		string getNombre(){
			return this->nombre;
		}
		
		void setNombre(string nombre){
			this->nombre.assign(nombre);
		}
		
		string getTamanio(){
			return this->tamanio;
		}
		
		void setTamanio(string tamanio){
			this->tamanio.assign(tamanio);
		}
		
		int getCap_personas(){
			return this->cap_personas;
		}
		
		void setCap_personas(int cap_personas){
			this->cap_personas=cap_personas;
		}
		
		vector<Animal*> getArtica(){
			return this->artica;
		}
		
		void setArtica(vector <Animal*> artica){
			this->artica=artica;
		}
		
		void setArticos(Animal* art){
			artica.push_back(art);
		}
		
		vector<Animal*> getDesertica(){
			return this->desertica;
		}
		
		void setDeserticos(vector <Animal*> desertica){
			this->desertica=desertica;
		}
		
		void setDesertica(Animal* des){
			desertica.push_back(des);
		}
		
		vector<Animal*> getJungla(){
			return this->jungla;
		}
		
		void setJunglas(vector <Animal*> jungla){
			this->jungla=jungla;
		}
		
		void setJungla(Animal* jun){
			jungla.push_back(jun);
		}
		
		vector<Animal*> getSabana(){
			return this->sabana;
		}
		
		void setSabanas(vector <Animal*> sabana){
			this->sabana=sabana;
		}
		
		void setSabana(Animal* sab){
			sabana.push_back(sab);
		}
		
		void printZona(vector <Animal*> x){
			
		}
	
		~Zoologico(){
		
		}
};

#endif

