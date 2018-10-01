
typedef struct
{
    char name [51];
    char lastName [51];
    float salary;
    int sector;
    int isEmpty;

} eEmployee;

typedef struct
{
    int id;
    char descripcion[20];

} eSector;

int menu();
int initEmployees(eEmployee x[], int len);
void harcodearEmployee(eEmployee* x);


