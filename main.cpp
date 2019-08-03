#include <iostream>
#include <iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Zoologico.cpp"
#include "Animal.cpp"

int menu();
int menuZona();
void printZona(vector <Animal*>);

int main(){
	int opc = 0;
	int opcTam = 0;
	int opcZona = 0;
	int opcTipoPatas=0;
	vector <Animal*> espera;
	
	
	string nombre_especie, nombre, tamanio, tipo;
		string largo_cola, peluda;
		string color_ojos, vision_noc;
		string tamanio_oreja;
		double cap_audicion;
		int cant_patas;
		string largo_pata,tipo_pata;
		string color_pelaje, grosor_pelaje, largo_pelaje;
		
		Zoologico* zoo;
		Animal* animal;		
		Pata* patas;
		Pelaje* pelaje;
		Ojo* ojos;
		Oreja* orejas;
		Cola* cola;
	
	
	do{
		switch(opc=menu()){
			case 1:
				cout<<"Nombre de Especie: ";
				cin>>nombre_especie;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Tamanio: ";
				cin>>tamanio;
				cout<<"Tipo: "<<endl;
				switch(opcZona=menuZona()){
					case 1:
						tipo="Articos";
						break;
						
					case 2:
						tipo="Deserticos";
						break;
						
					case 3:
						tipo="Tropicales";
						break;
						
					case 4:
						tipo="Sabana";
						break;
				}
				
				cout<<"Cantidad de patas: ";
				cin>>cant_patas;
				cout<<"Largo de Patas: ";
				cin>>largo_pata;
				cout<<"Tipo de Patas: ";
				cin>>tipo_pata;
				patas=new Pata(cant_patas, largo_pata, tipo_pata);
				
				cout<<"Color Pelaje: ";
				cin>>color_pelaje;
				cout<<"Grosor Pelaje: ";
				cin>>grosor_pelaje;
				cout<<"Largo Pelaje: ";
				cin>>largo_pelaje;
				pelaje = new Pelaje(color_pelaje, largo_pelaje, grosor_pelaje);
				
				cout<<"Color Ojos: ";
				cin>>color_ojos;
				cout<<"Vision Nocturna: ";
				cin>>vision_noc;
				ojos = new Ojo(color_ojos, vision_noc);
				
				cout<<"Tamanio Orejas: ";
				cin>>tamanio_oreja;
				cout<<"Capacidad Auditiva: ";
				cin>>cap_audicion;//esta variable es double
				orejas = new Oreja(tamanio_oreja, cap_audicion);
				
				cout<<"Largo de Cola: ";
				cin>>largo_cola;
				cout<<"Peluda: ";
				cin>>peluda;
				cola = new Cola(largo_cola, peluda);
				
				animal = new Animal(nombre_especie, nombre, tamanio, tipo, patas, pelaje, ojos, orejas, cola);
				espera.push_back(animal);
							
				break;
				
			case 2:
				for(int i=0; i<espera.size(); i++){
					espera.at(i)->print();
				}
				
				for(int i=0; i<espera.size(); i++){
					cout<<"1"<<endl;
					if(espera.at(i)->getTipo()=="Articos"){
						cout<<"2"<<endl;
						zoo->setArticos(espera.at(i));
					}
					if(espera.at(i)->getTipo()=="Deserticos"){
						cout<<"3"<<endl;
						zoo->setDesertica(espera.at(i));
					}
					if(espera.at(i)->getTipo()=="Tropicales"){
						cout<<"4"<<endl;
						zoo->setJungla(espera.at(i));
					}
					if(espera.at(i)->getTipo()=="Sabana"){
						cout<<"5"<<endl;
						zoo->setSabana(espera.at(i));
					}
				}
				cout<<"Hecho"<<endl;
				break;
				
			case 3:
				cout<<"Nombre Zoologico: "<<zoo->getNombre()<<endl;
				cout<<"Tamanio: "<<zoo->getTamanio()<<endl;
				cout<<"Capacidad de Personas: "<<zoo->getCap_personas()<<endl;
				cout<<"Articos: "<<endl;
				printZona(zoo->getArtica());
				cout<<"Deserticos: "<<endl;
				printZona(zoo->getDesertica());
				cout<<"Tropicales: "<<endl;
				printZona(zoo->getJungla());
				cout<<"Sabana: "<<endl;
				printZona(zoo->getSabana());
				break;
				
			case 4:
				
				espera.clear();
				if(espera.empty()){
					espera.clear();
				}
				zoo->clear(zoo->getArtica());
				zoo->clear(zoo->getDesertica());
				zoo->clear(zoo->getJungla());
				zoo->clear(zoo->getSabana());
				
				cout<<"Saliendo"<<endl;
				break;
		}
	}while(opc!=4);
	return 0;
}

int menu(){
        while(true){
        cout<<"MENU"<<endl
        <<"1.- Crear Animal"<<endl
        <<"2.- Agregar al Zoologico"<<endl
        <<"3.- Listar Zoologico"<<endl
        <<"4.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese 1 o 4"<<endl;
  }
  }//end del while
        return 0;
}


int menuZona(){
        while(true){
        cout<<"ZONAS"<<endl
        <<"1.- Artica"<<endl
        <<"2.- Desertica"<<endl
        <<"3.- Jungla Tropical"<<endl
		<<"4.- Sabana"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
          }
          else{

        cout<<"La opcion elegida no es valida, ingrese 1 o 4"<<endl;
  }
  }//end del while
        return 0;
}


void printZona(vector <Animal*> x){
	for(int i=0; i<x.size(); i++){
		cout<<"Animal #: "<<i<<endl;
		cout<<x[i]<<endl;
	}
}




