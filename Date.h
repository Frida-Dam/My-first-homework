#pragma once
#include<iostream>
#include<string>

using namespace std;

class Date { //lo usamos exclusivamente para poder generar e imprimir fechas aleatorias para otras clases
private:
	int d, m, a;
public:
	Date() {
		d = rand() % 31 + 1; //dia
		m = rand() % 12 + 1; //mes
		a = 1950 + rand() % 72;//anio
	}
	~Date(){}
	int getD() { return d; }
	int getM() { return m; }
	int getA() { return a; }

	string getFechaCompleta() {
		//dd/mm/aa
		string aux;//aux va a ir guardando la informacion en cadena gracias a .append
		aux.append(to_string(d));//el .append es para concatenar variables en cadena
		aux.append("/");
		aux.append(to_string(m));//si o si .append va con to_string, ya que solo funciona con cadenas
		aux.append("/");
		aux.append(to_string(a));
		return aux;
	}



};
