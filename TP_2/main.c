#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayEmployee.h"

#define CANT 5


int main()
{

    char seguir='s';
    eEmployee list[10];

    eSector sectores[] =
    {
        {1,"RRHH"},
        {2,"Ventas"},
        {3,"Compras"},
        {4,"Contable"},
        {5,"Sistemas"}
    };

    initeEmployee(eEmployee x[], int tam);
    harcodearEmployee(list);

     for(idEmployee = 0 ; idEmployee < CANT ; idEmployee++ )
    {
            numeroIngresado = getInt("Ingrese el valor: \n");
            arrayDeNumeros[indiceArray] = numeroIngresado;
    }
    do
    {
        switch (menu())
        {

        case 1://altaEmpleado
            addEmployee (list,10);
            system("pause");
            break;
        case 2:
            changeEmployee (list,10);//modificarEmpleado
            break;
        case 3:
            deleteEmployee (list,10);//borrarEmpleado
            break;
        case 4:
            reportEmployee (list,10);//informarEmpleado
            system("pause");
            break;
        case 5:
            seguir='n';
            break;
        }//finSwitch
    }
    while (seguir =='s');
    return 0;
}
