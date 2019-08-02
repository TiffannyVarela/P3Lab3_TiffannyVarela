#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

#ifndef COLA_CPP
#define COLA_CPP
using namespace std;

class Cola{
	private:
		string largo, peluda;
		
	public:
		Cola(){
		}
		
		Cola(string largo, string peluda){
			this->largo=largo;
			this->peluda=peluda;
		}
		
		string getLargo(){
			return this->largo;
		}
		
		void setLargo(string largo){
			this->largo.assign(largo);
		}
		
		string getPeluda(){
			return this->peluda;
		}
		
		void setPeluda(string peluda){
			this->peluda.assign(peluda);
		}
		
		void printCola(){
			cout<<setw(10)<<"Cola:";
			cout<<setw(10)<<"Largo: "<<largo;
			cout<<setw(10)<<"Peluda: "<<peluda<<endl;
		}
};

#endif
