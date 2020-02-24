/** <CENTER> Funcion principal del Proyecto </CENTER>
 * Funcion principal del proyecto que contiene solamente dos estructuras de control, una repetitiva
 * (do-while) para que despues de imprimir un menu,se de oportunidad al usuario de elegir la
 * opcion que desee utilizar y otra selectiva (swith) para cada una de las diferentes opciones,
 * mismas que llamaran a otras funciones que presentaran sub menus para permitir elegir cada unos de los
 * metodos implementados.
 *
 */


#include "cabecera.h"
int main()
{
    int resp;

    do
    {
        menu_main();
        printf("\n\nSeleccione una opcion: ");
        scanf("%d",&resp);

        switch(resp)
        {
        case 1:
            maneja_tabulacion();
            break;
        case 2:
            menu_raices();
            opciones_raices();
            break;
        case 0:
            exit(0);

        default:
            printf("\nOpcion Incorrecta!");
        }

        printf("\nDesea elegir otra opcion?: (si=1, no=0)");
        scanf("%d",&resp);

    }
    while(resp != 0);


    return 0;
}
