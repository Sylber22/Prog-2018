#include "persona.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init(EPersona lista[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        lista[i].isEmpty = 1;
    }
}

int obtenerEspacioLibre(EPersona lista[], int len)
{
    int i;
    int retorno = -1;

    for(i=0; i<len; i++)
    {
        if(lista[i].isEmpty == 1)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}


void alta(EPersona lista[], int len)
{
    int index;

    index = obtenerEspacioLibre(lista, len);

    if(index != -1)
    {
        printf("Nombre: ");
        fflush(stdin);
        gets(lista[index].nombre);

        printf("Apellido: ");
        fflush(stdin);
        gets(lista[index].apellido);

        printf("Documento: ");
        scanf("%ld",&lista[index].dni);

         printf("Fecha de nacimiento dia: ");
       scanf("%d", &lista[index].feNac.dia);

              printf("Fecha de nacimiento mes: ");
       scanf("%d", &lista[index].feNac.mes);

              printf("Fecha de nacimiento anio: ");
       scanf("%d", &lista[index].feNac.anio);

       lista[index].isEmpty= 0;

    }
    else
    {

    }

    return;
}
