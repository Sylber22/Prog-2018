#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct empleado
{
    int legajo;
    char nombre [25];
    char sexo;
    float sueldo;
} eEmpleado;

//prototipo abajo de la estructura
void mostrarEmpleado (eEmpleado employee);

int main()
{
    eEmpleado unEmpleado;
    printf("Ingrese legajo:");
    scanf("%d",&unEmpleado.legajo);

     printf("Ingrese nombre:");
    scanf("%d",&unEmpleado.nombre);

     printf("Ingrese sexo:");
    scanf("%d",&unEmpleado.sexo);

     printf("Ingrese sueldo:");
    scanf("%d",&unEmpleado.sueldo);

    eEmpleado otroEmpleado;
    eEmpleado emp3 = {2222 , "Jose" , 'm' , 200000};
    eEmpleado emp4 = emp3;

    unEmpleado.legajo= 1234;
    strcpy (unEmpleado.nombre, "Juan");
    unEmpleado.sexo ='m';
    unEmpleado.sueldo =10000.5;

    otroEmpleado.legajo= 1122;
    strcpy (otroEmpleado.nombre, "Lucia");
    otroEmpleado.sexo ='f';
    otroEmpleado.sueldo =15000.75;

    mostrarEmpleado (unEmpleado);
    mostrarEmpleado (otroEmpleado);
    mostrarEmpleado (emp3);
}
    void mostrarEmpleado (eEmpleado employee);
    {
          printf("%d  %s  %c  %.2f\n\n", employee.legajo,employee.nombre,employee.sexo,employee.sueldo);

    }

    /* para no hacer tantos printf hacer lo de arriba
    **************************************************
        printf("%d  %s  %c  %.2f\n\n", unEmpleado.legajo,unEmpleado.nombre,unEmpleado.sexo,unEmpleado.sueldo);
       printf("%d  %s  %c  %.2f\n\n", otroEmpleado.legajo,otroEmpleado.nombre,otroEmpleado.sexo,otroEmpleado.sueldo);
    */

