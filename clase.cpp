#include "pch.h"
#include <ctime>
#include <conio.h>
#include "ArrPlanV.h"

using namespace System;

int main()
{
    srand(time(NULL));//es una semilla
    ArrPlanV* arr = new ArrPlanV();
    arr->agregarPlanV();
    arr->agregarPlanV();
    arr->agregarPlanV();
    arr->agregarPlanV();

    cout << "\n Reporte vacaciones en rango de fechas:";
    cout << "\n-----------------------------------------";
    arr->reporte1(1990, 2021);
    getch(); system("cls");
    cout << "\n Reporte Vacaciones Hotel Westin:";
    cout << "\n---------------------------------";
    arr->reporte2("Westin");
    getch(); system("cls");
    arr->borrarUltimoPlanV();//borra el ultimo vector
    arr->borrarUltimoPlanV();
    cout << "\n Reporte Plan de Vacaciones:";
    cout << "\n---------------------------------";
    arr->reporte3();
    cin.get();//indica q presiones una tecla
    cin.ignore();

    return 0;
}
