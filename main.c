#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float punto[3][3];
    for (int i = 0; i < 3; i++)
    {
        punto[i][0]=ingresarComponente('X',i);
        punto[i][1]=ingresarComponente('Y',i);
        punto[i][2]=ingresarComponente('Z',i);
    }

    float volumen=calcularVolumen(punto);
    float areaS=calcularAreaSuperficial(punto);
    printf("El volumen del cono es: %f\n",volumen);
    printf("El area superficial del cono es: %f\n",areaS);


    return 0;
}

