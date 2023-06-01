#include <stdio.h>
#include <math.h>
#include "funciones.h"


float ingresarComponente(char comp, int i){
    float a;
    printf("Ingrese la componente %c del punto %d ",comp,i);
    scanf("%f",&a);
    return a;
}

float calcularDistancias(float x1, float y1, float z1,float x2, float y2, float z2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
}

float calcularVolumen(float punto[3][3]){
    float radio = calcularDistancias(punto[0][0], punto[0][1],punto[0][2],punto[1][0],punto[1][1],punto[1][2]);
    float altura = calcularDistancias(punto[0][0], punto[0][1],punto[0][2],punto[2][0],punto[2][1],punto[2][2]);
    return (3.14*pow(radio,2)*altura)/3;
}

float calcularAreaSuperficial(float punto[3][3]){
    float radio = calcularDistancias(punto[0][0], punto[0][1],punto[0][2],punto[1][0],punto[1][1],punto[1][2]);
    float generatriz = calcularDistancias(punto[1][0], punto[1][1],punto[1][2],punto[2][0],punto[2][1],punto[2][2]);

    float areaCono = 3.14*radio*generatriz;
    float areaBase = 3.14*pow(radio,2);
    return areaCono+areaBase;
}