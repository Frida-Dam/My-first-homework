#pragma once
#include <iostream>
#include <string>

using namespace std;

string continentes[5] = { "America del Norte","America del Sur", "Asia","Europa","Africa" };
string nombreH[5] = { "Marriot", "Westin","Perking", "BigHouse","LandingWay" };
string tipoH[4] = { "Business", "Airport","Suite","Resort" };

class Hotel {
protected:
	string nombre;
	string localizacion;
	string tipo;
	int estrellas;
	int numeroH;
public:
	Hotel() {
		nombre = nombreH[rand() % 5];
		localizacion = continentes[rand() % 5];
		tipo = tipoH[rand() % 4];
		estrellas = rand() % 5 + 1;
		numeroH = 20 + rand() % 81; //el 81 indica q es un numero del 0 al 80 y el 20 se le suma al final.
	}
	~Hotel(){}
	string get_nombre() { return nombre; }
	string get_localizacion() { return localizacion; }
	string get_tipo() { return tipo; }
	int get_estrellas() { return estrellas; }
	int get_numeroH() { return numeroH; }

	//funcion
	void getInfoHotel() {
		cout << "\n Nombre:" << nombre;
		cout << "\n Localizacion:" << localizacion;
		cout << "\n Tipo:" << tipo;
		cout << "\n Estrellas" << estrellas;
		cout << "\n Numero de habitaciones:" << numeroH;
	}
};