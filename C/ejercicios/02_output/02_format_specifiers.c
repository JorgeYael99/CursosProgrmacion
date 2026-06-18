/*
 * Ejercicio: Especificadores de formato
 *
 * Dadas estas variables:
 */
#include <stdio.h>

int main() {
    int edad = 25;
    float altura = 1.75f;
    double pi = 3.1415926535;
    char inicial = 'A';
    char nombre[] = "Carlos";

    printf("%s (%c) tiene %d anios, mide %.2f m, y pi vale %.2lf\n",nombre,inicial,edad,altura,pi);

    /*
     * Imprime la siguiente frase USANDO las variables y
     * sus format specifiers correctos (%d, %f, %lf, %c, %s):
     *
     * "Carlos (A) tiene 25 anios, mide 1.75 m, y pi vale 3.14"
     *
     * Hint: altura con 2 decimales, pi con 2 decimales.
     */


    return 0;
}
