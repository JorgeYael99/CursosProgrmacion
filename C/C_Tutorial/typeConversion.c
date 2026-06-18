#include <stdio.h>

int main(){

    // División de Enteros y Truncamiento
    int x = 5;
    int y = 2;
    int div=x/y;
    printf("5 / 2 = %d\n",div);

    // Aqui solamente hay una division de enteros pero no son los numeros exactos

    //Conversion implicita
    float myFloat =9;
    printf("%f\n", myFloat);

    int h1 = 16;
    float hh = h1/7;
    printf("%f\n",hh); //2.000000

    //Conversión por Promoción Aritmética
    int h3 = 16;
    float hhh = h3/7.0;
    printf("%f\n",hhh);// 2.285714
    // Conversion explicita
    float ex = (float)h1/7;
    printf("%f\n",ex);
}