//
// Created by PC on 4/4/2020.
//

#include "varia_cam_lib.h"
#include <stdio.h>
#include <stdlib.h>
int  main ()
{
    int x = 0 ;
    int m = 0 ;
    passsar inter;

    printf ("Ingrese el valor que usted desea 1ero: \n" );
    scanf ("%d",&x);

    printf ("Ingrese el valor que usted va a cambiar 2do: \n" );
    scanf ("%d",&m);

    inter = intercambio(x,m);
    x = inter.valor1 ;
    m = inter.valor2;

    printf ("El valor invertido del 1ro es: %d \n",x);
    printf ("El valor invertido del 2do es: %d \n",m);

    return 0 ;
}