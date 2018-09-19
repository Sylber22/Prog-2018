#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

#define CANT 3

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona personas[CANT];

    init(personas, CANT);

    do
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Modificar persona\n");
        printf("4- Imprimir lista ordenada por apellido y nombre\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
             alta(personas, CANT);
         break;

        case 2://baja
/*
            printf("Documento: ");
            scanf("%d",auxDoc);
            for (i=0; i<CANT; i++)
            {
                if (auxLegajo==legajo[i])
                {
                    isEmpty[i]=1;
                    flag=1;
                }
                if (flag==0)
                {
                    printf("Dato no encontrado");
                }

            }*/

                break;
        case 3://modificacion
            break;
        case 4://imprimir
            break;
        case 5://salir
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}
