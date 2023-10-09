#pragma once
#include <vector>
#include"PlanVacaciones.h"

class ArrPlanV {
private:
	vector<PlanVacaciones*>arr;
public:
	ArrPlanV() {}
	~ArrPlanV() {}
	void agregarPlanV() {
		PlanVacaciones* obj = new PlanVacaciones();
		arr.push_back(obj);//push_back sirve para agregar un objeto al final del vector
	}
	void borrarUltimoPlanV() {
		arr.pop_back();//pop_back sirve para eliminar el ultimo objeto del vector
	}

	//para mostrar la lista de vacaciones en un intervalo de fecha
	void reporte1(int a1, int a2) {//a1 o sea anio 1 y a2 o sea anio 2
		if (a1 <= a2) {
			for (int i = 0; i < arr.size(); i++) {//.size representa el tamanio del arreglo, o sea si hay 5 valores ingresados solo va a aparecer el 5
				if (arr[i]->getAnio() >= a1 && arr[i]->getAnio() <= a2) {
					arr[i]->getInfoPlanV();
				}
				cout << "\n";
			}
		}
	}

	//mostrar lista de vacaciones de un hotel
	void reporte2(string nombre) {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i]->get_nombre() == nombre) {//para poder escoger en la consola el nombre del hotel para el reporte
				cout << "\n";
				arr[i]->getInfoPlanV();
			}
		}
	}

	//Los boletos que tiene cada plan de vacaciones
	void reporte3() {
		for (int i = 0; i < arr.size(); i++) {
			cout << "\n";
			arr[i]->getInfoBoleto(); //esto sirve para imprimir todos los boletos ingresados
		}
	}
	//el reporte 3 y el 4 son lo mismo usando diferentes tecnicas
	void reporte4() {
		for (PlanVacaciones* p : arr) {//es un for por rango, lo que hace es recorrer todas las variables del vector, p es el nombre q se coloco pero se puede colocar otro
			//con esto se puede usar
			//arr.begin();
			//arr.end();
			//arr.erase(arr.begin(),arr.end()-1) se usa -1 para q no llegue al ultimo elemento porq si no sale error por estar fuera del rango
			cout << "\n";
			p->getInfoBoleto();
		}
	}
};