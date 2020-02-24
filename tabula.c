#include "cabecera.h"

void tabula_funcion(double xi, double xf, double inc, char *ap_expr)
{
    double fx,x;

    x = xi;

    te_variable vars[] = {"x",&x};

    te_expr *n1;

    n1 = te_compile(ap_expr,vars,1,0);

    do
    {
        fx = te_eval(n1);

        printf("\n%10.6lf | %10.6lf ",x,fx);

        x = x + inc;

    }
    while(x <= xf);

    te_free(n1);

}
