#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef PATA_CPP
#define PATA_CPP
using namespace std;

class Pata{
	private:
		int cant_patas;
		string largo;
		string tipo;
		
	public:
		Pata(){
		}
		
		Pata(int cant_patas, string largo, string tipo){
			this->cant_patas=cant_patas;
			this->largo=largo;
			this->tipo=tipo;
		}
		
		int getCant_patas(){
			return this->cant_patas;
		}
		
		void setCant_patas(int cant_patas){
			this->cant_patas=cant_patas;
		}
		
		string getLargo(){
			return this->largo;
		}
		
		void setLargo(string largo){
			this->largo.assign(largo);
		}
		
		string getTipo(){
			return this->tipo;
		}
		
		void setTipo(string tipo){
			this->tipo.assign(tipo);
		}
		
		void printPata(){
			cout<<setw(10)<<"Patas:";
			cout<<setw(10)<<"Cantidad de Patas: "<<cant_patas;
			cout<<setw(10)<<"Largo: "<<largo;
			cout<<setw(10)<<"Tipo: "<<tipo<<endl;
		}
		
		//~Pata(){
		//}
};

#endif
