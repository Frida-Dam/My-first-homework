#pragma once
#include "Boleto.h"
#include "Hotel.h"

class PlanVacaciones :public Boleto, public Hotel {
private:
	int duracion;
	int numeroP;
public:
	PlanVacaciones() {
		duracion = 1 + rand() % 15;
		numeroP = 1 + rand() % 9;
	}
	~PlanVacaciones(){}
	void getInfoPlanV() {
		cout << "\n Duracion:" << duracion;
		cout << "\n Numero de personas:" << numeroP;
		getInfoHotel();
		getInfoBoleto();
	}
};