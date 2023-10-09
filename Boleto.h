#pragma once
#include "Date.h"//no se coloca otra libreria porque date ya las incluye

class Boleto {
protected:
	int codigo;
	double precio;//se puede colocar float
	Date date;//se crea una variable
public:
	Boleto(){
		codigo = rand() % 999999;
		precio = rand() % 10000;
		date = Date();//llama a los datos en el costructor de la clase Date
	}
	~Boleto() {}
	int getDia() { return date.getD(); }//buscar porq lo llamamos aqui.
	int getMes() { return date.getM(); }
	int getAnio() { return date.getA(); }

	void getInfoBoleto() {
		cout << "\n Codigo:" << codigo;
		cout << "\n precio:" << precio;
		cout << "\n Date:" << date.getFechaCompleta();
	}
};