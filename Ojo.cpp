#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef OJO_CPP
#define OJO_CPP
using namespace std;

class Ojo{
	private:
		string color, vision_noc;
		
	public:
		Ojo(){
		}
		
		Ojo(string color, string vision_noc){
			this->color=color;
			this->vision_noc=vision_noc;
		}
		
		string getColor(){
			return this->color;
		}
		
		void setColor(string color){
			this->color.assign(color);
		}
		
		string getVision_noc(){
			return this->vision_noc;
		}
		
		void setVision_noc(string vision_noc){
			this->vision_noc.assign(vision_noc);
		}
		
		void printOjo(){
			cout<<setw(10)<<"Ojos:";
			cout<<setw(10)<<"Color: "<<color;
			cout<<setw(10)<<"Vision nocturna: "<<vision_noc<<endl;
		}
};

#endif
