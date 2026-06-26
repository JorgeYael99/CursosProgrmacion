#include <stdio.h>
#define PI 3.1416

int main(){
    const int NUM = 20; // tip: declara tus constantes con MAYUSCULAS
    //NUM = 12; Esto es un error, las constantes son inmutables y solo sirven para leer
    printf("Constante: %d\n",NUM);
    printf("PI (con #define): %f\n", PI);

    /*
    const int NUM2;
    NUM2 =12;
    */

}