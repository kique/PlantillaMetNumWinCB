#include "cabecera.h"

void tabula_funcion(double xi, double xf, double inc, char *ap_expr,int archivo)
{
    double fx,x;
    FILE *pF; //Creamos un apuntador de tipo FILE

    if(archivo==1)
    {
        pF = fopen("tabulacion.csv","w"); //Abrimos el archivo en modo
                                              //escritura
        if(pF == NULL) //Verificamos si no fue posible abrir el archivo
        {
            puts("Error no se pudo crear el archivo");
            return(1); // Si no fue posible se termina el programa
                              //con la senal 1
        }
    }

    x = xi;

    te_variable vars[] = {"x",&x};

    te_expr *n1;

    n1 = te_compile(ap_expr,vars,1,0);

    do
    {
        fx = te_eval(n1);

        printf("\n%10.6lf | %10.6lf ",x,fx);

        if(archivo==1)
               fprintf(pF, "\n%10.6lf , %10.6lf ",x,fx); //Se escribe en el archivo
                                                            //archivo la cadena
                                                            // usando el //apuntador pF


        x = x + inc;

    }
    while(x <= xf);

    if(archivo==1)
        fclose(pF); // Cerramos el archivo

    te_free(n1);

}
