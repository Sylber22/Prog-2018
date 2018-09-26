
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;
} eEmpleado;


void inicializarEmpleados( eEmpleado x[], int tam);
int buscarLibre( eEmpleado x[], int tam);
int buscarEmpleado(eEmpleado x[], int tam, int legajo);
void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado nomina[], int tam);
void agregarEmpleado(eEmpleado empleados[], int tam);
void eliminarEmpleado(eEmpleado *empleados, int tam);
void modificarEmpleado(eEmpleado empleados[], int tam);
int menu();
int harcodeoEmpleados (x);
