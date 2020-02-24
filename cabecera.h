#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu_main(void);
void menu_raices(void);

void maneja_tabulacion(void);

void tabula_funcion(double , double , double , char *);

double fx(double x);
void maneja_biseccion();
void opciones_raices(void);
double biseccion(double xl,double xu, double tol, int maxit,int *api, double *apea);

#include <string.h>

//Libreria de el analizador TinyExpress
#include "tinyexpr.h"

#endif // CABECERA_H_INCLUDED
