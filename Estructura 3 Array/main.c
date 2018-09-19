#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3


typedef struct
{
    int legajo;
    char nombre [25];
    char sexo;
    float sueldo;

} eEmpleado;

//prototipo abajo de la estructura

void mostrarEmpleados (eEmpleado employee);
void mostrarEmpleados (eEmpleado lista [], int tam );

int main()
{
//eEmpleado empleados[]={{1234, "Juan",'m', 12300},{2321, "Luisa",'f', 14700},{2122, "Ariel", 'm',11300}};
    eEmpleado empleados[TAM];

    for (int i=0; 1 <TAM; i ++)
    {

        printf("Ingrese legajo:");
        scanf("%d",&empleados [i] .legajo);

        printf("Ingrese nombre:");
        scanf("%d",&empleados[i].nombre);

        printf("Ingrese sexo:");
        scanf("%d",&empleados[i].sexo);

        printf("Ingrese sueldo:");
        scanf("%d",&empleados[i].sueldo);

    }

    return 0;

}
void mostrarEmpleados (eEmpleado employee)
{
    printf("%d  %s  %c  %.2f %02d /%02d/%4d\n\n", employee.legajo,employee.nombre,employee.sexo,employee.sueldo);

}

void mostrarEmpleados (eEmpleado lista [], int tam )
{
    system ("cls");
    printf ("Legajo  Nombre  Sexo  Sueldo \n\n");
    for (int i=0; 1<tam; i++)
    {
        mostrarEmpleados (lista [i]);
    }
}



