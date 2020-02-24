#include "cabecera.h"

void maneja_tabulacion()
{
    double xa,xb,inc;
    int imax,i,res, length, c;
    char expresion[30];

    printf("\nTabulacion de una Funcion\n\n");

    while ((c = getchar()) != '\n' && c != EOF);

    printf("\nIngrese la ecuacion f(x)= ");
    fgets(expresion,30,stdin);

    length = strlen(expresion);

    if (length > 0 && expresion[length - 1] == '\n')
        expresion[length - 1] = '\0';

    printf("Evaluando:\n\t%s\n", expresion);

    printf("\n Ingrese el limite izquierdo xa: ");
    scanf("%lf",&xa);
    printf("\n Ingrese el limite derecho xb: ");
    scanf("%lf",&xb);
    printf("\n Ingrese el valos del incremento: ");
    scanf("%lf",&inc);

    tabula_funcion(xa,xb,inc,expresion);
}

void maneja_biseccion(void)
{
    double xl, xu, es, ea, raiz;
    int imax,i;

    system("cls"); //Se envia el comando cls al sistema operativo para que borre la pantalla
    printf("Metodo de la biseccion para localizar raíces");
    printf("\n\nIngrese el extremo izquierdo del intervalo xl: ");
    scanf("%lf",&xl);
    printf("\n\nIngrese el extremo derecho del intervalo xu: ");
    scanf("%lf",&xu);
    printf("\n\nIngrese el error maximo esperado: ");
    scanf("%lf",&es);
    printf("\n\nIngrese el numero maximo de iteraciones: ");
    scanf("%d",&imax);

    raiz = biseccion(xl,xu,es,imax,&i,&ea);

    printf("\n\nLa raiz es %lf con un error de %lf en %d iteraciones",raiz,ea,i);
}
