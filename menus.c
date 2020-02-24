#include "cabecera.h"

void menu_main(void)
{
    system("cls");
    printf("\n\nSeleccione una Opcion:");
    printf("\n1.- Analizar una Funcion Matematica");
    printf("\n2.- Localizar Raices");

    printf("\n0.- Salir");
}

void menu_raices(void)
{
    system("cls");
    printf("\n1. Metodo de la Biseccion");

    printf("\n0.- Salir");
}

void opciones_raices(void)
{
    int resp;

    do
    {

        printf("\n\nSeleccione una opcion: ");
        scanf("%d",&resp);

        switch(resp)
        {
        case 1:
            maneja_biseccion();
            break;
        case 2:

            break;
        default:

            printf("\nOpcion Incorrecta!");
        }

        printf("\nDesea seleccionar otro metodo?: (si=1, no=0)");
        scanf("%d",&resp);

    }
    while(resp != 0);
}
