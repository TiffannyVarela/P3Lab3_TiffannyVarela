#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef PELAJE_CPP
#define PELAJE_CPP
using namespace std;

class Pelaje{
	private:
		string color, grosor, largo;
		
	public:
		Pelaje(){
		}
		
		Pelaje(string color, string largo, string grosor){
			this->color=color;
			this->largo=largo;
			this->grosor=grosor;
		}
		
		string getColor(){
			return this->color;
		}
		
		void setColor(string color){
			this->color.assign(color);
		}
		
		string getLargo(){
			return this->largo;
		}
		
		void setLargo(string largo){
			this->largo.assign(largo);
		}
		
		string getGrosor(){
			return this->grosor;
		}
		
		void setGrosor(string grosor){
			this->grosor.assign(grosor);
		}
		
		void printPelaje(){
			cout<<setw(10)<<"Pelaje:";
			cout<<setw(10)<<"Color: "<<color;
			cout<<setw(10)<<"Largo: "<<largo;
			cout<<setw(10)<<"Grosor: "<<grosor<<endl;
		}
};

#endif
