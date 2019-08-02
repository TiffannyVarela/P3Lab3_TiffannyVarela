#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Pata.cpp"
#include "Pelaje.cpp"
#include "Ojo.cpp"
#include "Oreja.cpp"
#include "Cola.cpp"

#ifndef ANIMAL_CPP
#define ANIMAL_CPP
using namespace std;

class Animal{
	
	private:
		string nombre_especie, nombre, tamanio, tipo;
		Pata* patas;
		Pelaje* pelaje;
		Ojo* ojos;
		Oreja* orejas;
		Cola* cola;
		
	public:
		
		Animal();
		
		Animal(string nombre_especie, string nombre, string tamanio, string tipo, Pata* patas, Pelaje* pelaje, Ojo* ojos, Oreja* orejas, Cola* cola){
			this->nombre_especie=nombre_especie;
			this->nombre=nombre;
			this->tamanio=tamanio;
			this->tipo=tipo;
			this->patas=patas;
			this->pelaje=pelaje;
			this->ojos=ojos;
			this->orejas=orejas;
			this->cola=cola;
		}
		
		string getNombre_especie(){
			return this->nombre_especie;
		}
		
		void setNombre_especie(string nombre_especie){
			this->nombre_especie.assign(nombre_especie);
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
		
		string getTipo(){
			return this->tipo;
		}
		
		void setTipo(string tipo){
			this->tipo.assign(tipo);
		}
		
		Pata* getPatas(){
			return this->patas;
		}
		
		void setPatas(Pata* patas){
			this->patas=patas;
		}
		
		Pelaje* getPelaje(){
			return this->pelaje;
		}
		
		void setPelaje(Pelaje* pelaje){
			this->pelaje=pelaje;
		}
		
		Ojo* getOjo(){
			return this->ojos;
		}
		
		void setOjo(Ojo* ojos){
			this->ojos=ojos;
		}
		
		Oreja* getOreja(){
			return this->orejas;
		}
		
		void setOreja(Oreja* orejas){
			this->orejas=orejas;
		}	
		
		Cola* getCola(){
			return this->cola;
		}
		
		void setCola(Cola* cola){
			this->cola=cola;
		}	
		
		void printPelaje(){
			cout<<"Animal:";
			cout<<setw(10)<<"Nombre de Especie: "<<nombre_especie;
			cout<<setw(10)<<"Nombre del Animal: "<<nombre;
			cout<<setw(10)<<"Tamanio: "<<tamanio<<endl;
			cout<<setw(10)<<"Tipo: "<<tipo<<endl;
			patas->printPata();
			pelaje->printPelaje();
			ojos->printOjo();
			orejas->printOreja();
			cola->printCola();
			cout<<endl;
			cout<<endl;
		}
		
		~Animal(){
		}
};

#endif
