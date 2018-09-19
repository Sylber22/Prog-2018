#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct fecha
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre [25];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
} eEmpleado;

//prototipo abajo de la estructura

void mostrarEmpleado (eEmpleado employee);

int main()
{
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado={1234, "Analia", 'f', 30000, {17,9,2018}};

    unEmpleado.legajo= 1234;
    strcpy (unEmpleado.nombre, "Juan");
    unEmpleado.sexo ='m';
    unEmpleado.sueldo =10000.5;

    unEmpleado.fechaIngreso.dia = 17;
    unEmpleado.fechaIngreso.mes = 9;
    unEmpleado.fechaIngreso.anio = 2018;

  return 0;

}
void mostrarEmpleado (eEmpleado employee)
{
    printf("%d  %s  %c  %.2f %02d /%02d/%4d\n\n", employee.legajo,employee.nombre,employee.sexo,employee.sueldo,employee.fechaIngreso.dia,employee.fechaIngreso.fecha,employee.fechaIngreso.anio);

}



