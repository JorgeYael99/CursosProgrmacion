#include <stdio.h>

int main(){
    // Inicializamos 2 variables, una de tipo entero y otra de tipo flotante
    int x = 10;
    float fl = 12.1212f;
    // Mandamos a imprimir las variables
    printf("valor de fl es: %.1f\n",fl);
    printf("valor de x es: %d\n",x);
    // Inicializamos una variable nueva y le damos el mismo valor que el que tiene "x"
    int xd;
    xd = x;
    printf("el valor de xd es el mismo que el de x: %d\n",xd);

    // Otros tipos de datos
    double precision = 10.101010;
    char letra = 'h';
    printf("el valor de \"Precision\" es: %f, y el valor de \"Letra\" es: %c",precision, letra);

    return 0;
}