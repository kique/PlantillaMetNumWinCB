#include "cabecera.h"

double biseccion(double xl,double xu, double tol, int maxit,int *api, double *apea)
{
    double xr,xrold;
    *api=1;

    printf("\n i |  xl  |  xu  | xr  | ea");
    printf("\n---------------------------");

    do{
        xrold = xr;
        xr = (xl+xu)/2.0;

        if(xr != 0)
            *apea = fabs( (xr - xrold)/xr)*100;

        printf("\n%3d  | %10.6lf | %10.6lf | %10.6lf | %10.6lf",*api,xl,xu,xr,*apea);

        if(fx(xl)*fx(xr)<0)
        {
            xu=xr;
        }
        if(fx(xl)*fx(xr)>0)
        {
            xl=xr;
        }
        if(fx(xl)*fx(xr)==0)
        {
            return xr;
        }
        *api = *api+1;
    }while(*apea >=tol && *api <= maxit);

    return xr;
}
