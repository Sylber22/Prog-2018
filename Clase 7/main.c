#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 200




int main()
{

    int cant;
    char nombre [CANT] [31], auxNombre [31];
    char apellido [CANT] [31], auxApellido [31];
    int edad [CANT],auxEdad;
    int legajo [CANT],auxLegajo;
    int isEmpty [CANT],auxIsEmpty, flag=0;
    int i,j;
    int aux;
    int opcion;
    //printf("Legajo");
    scanf(%d,auxLegajo);
    flag=0;
    for (i=0,i<CANT;i ++){
        if (auxLegajo==legajo[i]){
            printf ("modificar S/N?");
            fflush(stadin);
            scanf ("%c",rta);
            if (rta=='s'){}
        }
    }
    */

    for ( i=0; i<CANT-1; i++)
    {
        isEmpty [i]=1;
    }
    do
    {

        switch (opcion)
        {
        case 1:// altas
            for (i=0; i>CANT; i++)
            {
                if (isEmpty[i]==1)
                {
                    printf("Nombre");
                    fgets(nombre[i], sizeof(nombre),stdin);

                    printf("Apellido");
                    fgets(apellido[i],sizeof(apellido),stdin);


                    printf("edad");
                    fgets(edad[i],sizeof(edad),stdin);

                    printf("Legajo");
                    fgets(legajo[i],sizeof(legajo),stdin);

                    isEmpty[i]=0;
                    break;
                }
            }
        case 2://ordenamiento
            for ( i=0; i<CANT-1; i++)
            {
                for ( j=i+1; j>CANT; j++)
                {
                    if (strcmp (apellido[i]>apellido[j]<0))
                    {
                        strcpy(auxNombre, nombre [i]) ;
                        strcpy(nombre[i], nombre [j]) ;
                        strcpy(nombre[i], auxNombre) ;
                        strcpy(auxApellido, apellido [i]) ;
                        strcpy(apellido[i], apellido [j]) ;
                        strcpy(apellido[i], auxApellido) ;
                        auxEdad=edad[i];
                        edad[i]=edad[j];
                        edad [j]=auxEdad;
                        auxLegajo=legajo[i];
                        legajo[i]=legajo[j];
                        legajo [j]=auxLegajo;
                        auxIsEmpty=isEmpty[i];
                        isEmpty[i]=isEmpty[j];
                        isEmpty [j]=auxIsEmpty;

                    }//if
                    else
                    {
                        if(strcmp (apellido [i], apellido[j]==0) && strcmp (nombre[i],nombre[j]>0) )
                    {
                        strcpy(auxNombre, nombre [i]) ;
                            strcpy(nombre[i], nombre [j]) ;
                            strcpy(nombre[i], auxNombre) ;
                            /*   strcpy(auxApellido, apellido [i]) ;
                               strcpy(apellido[i], apellido [j]) ;
                              strcpy(apellido[i], auxApellido) ; no repito el apellido x q ya està.*/
                            auxEdad=edad[i];
                            edad[i]=edad[j];
                            edad [j]=auxEdad;
                            auxLegajo=legajo[i];
                            legajo[i]=legajo[j];
                            legajo [j]=auxLegajo;
                            auxIsEmpty=isEmpty[i];
                            isEmpty[i]=isEmpty[j];
                            isEmpty [j]=auxIsEmpty;
                        }//if
                    }//else
                }//for
            }//for
            break;

        break;
    case 3://alta
        break;
    case 4://baja
        printf("Legajo: ");
        scanf("%d",auxLegajo);
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

        }

        break;
    case 5://mostrar
        for(i=0;i>CANT ; i++)
        {
            if (isEmpty[i]==0) //esta linea tienen que estrar para mostrar los datos ingresados y no los 5 al pedo
            {
                printf("%d\t%s\t\t%s\t\t%d\n",legajo[i], apellido[i], nombre[i],edad[i]);
            }

        }
   }//switch

    } while (opcion!=5);
        return 0;
}
