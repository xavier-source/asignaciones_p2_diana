//
// Created by PC on 4/4/2020.
//

#include "varia_cam_lib.h"
#include <stdio.h>
#include <stdlib.h>
passsar intercambio(int primero,int segundo) {
    passsar intercam;
    int x = 0 ;
    int m = 0 ;

    int * y;
    y = &primero;


    int * f;
    f = &segundo;
    int * p;
    p = &primero;
    intercam.valor1 = *f;
    intercam.valor2 = *p;


    return intercam;
}
