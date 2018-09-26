#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "prueba.h"


int main()
{

    char seguir = 's';
    eEmpleado lista[10];

    inicializarEmpleados(lista, 10);
    int x;

    do
    {
        switch(menu())
        {

        case 1:
            agregarEmpleado(lista, 10);
            system("pause");
            break;
        case 2:
            eliminarEmpleado(lista, 10);
            break;
        case 3:
            modificarEmpleado(lista, 10);
            break;
        case 4:
            mostrarEmpleados(lista, 10);
            system("pause");
            break;
        case 5:
            seguir = 'n';
            break;
        }

    }
    while(seguir == 's');



    return 0;
}

