#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "ArrayEmployee.h"

void harcodearEmployee(eEmployee x[])
{
    eEmployee y[]=
    {
        {1111, "ana", 'f', 15000, 4, 1},
        {3333, "luis", 'm', 25000, 4, 1},
        {4444, "alberto", 'm', 31000, 5, 1},
        {5555, "julia", 'f', 30000, 1, 1},
        {1313, "julieta", 'f', 23000, 2, 1},
        {4545, "andrea", 'f', 31000, 5, 1},
        {3232, "mauro", 'm', 27000, 5, 1},
        {4545, "andres", 'm', 31000, 3, 1},
        {3232, "mariela", 'f', 27000, 3, 1}
    };
    for(int i=0; i<9; i++)
    {
        x[i] = y[i];
    }
}

/** \brief Para indicar que todas las posiciones del
* \ array están vacías, esta función pone la bandera
* \ (isEmpty) en TRUE en todas las posiciones del array.
* \param list Employee* puntero del array de employees
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
**/

/**
 * \brief Inicializa un array de enteros con el valor recibido
 * \param array Es el array a ser inicializado
 * \param cantidad_de_elementos Indica la logitud del array
 * \param valor Es el valor que sera cargado en cada posicion
 * \return -
 *
 */
void inicializarArrayInt(int array[],int cantidad_de_elementos,int valor)
{
    int i;
    for(i=0;i < cantidad_de_elementos; i++)
    {
        array[i] = valor;
    }
}
int initeEmployee(eEmployee x[], int tam);
{
    return 0;
}

/** \brief Agrega en un array de empleados existente los
* \ valores recibidos como parámetro en la primer posición libre.
* \param list employee*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param salary float
* \param sector int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
**/

int addEmployee(Employee x[] list, int len, int id, char name[],char
lastName[],float salary,int sector)
{
return -1;
}

/** \brief Busca un empleado recibiendo como parámetro de búsqueda su Id.
* \param list Employee x[]
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
*
*/
int findEmployeeById(Employee* list, int len,int id)
{
return NULL
}
