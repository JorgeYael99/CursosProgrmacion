/*
 * Ejercicio: ASCII y tipos extendidos
 *
 * 1. Imprime una tabla de caracteres ASCII del 65 al 70
 *    (A, B, C, D, E, F) mostrando:
 *    - El número (como int)
 *    - El caracter (como char)
 *
 *    Formato esperado:
 *      65 = A
 *      66 = B
 *      ...
 *
 * 2. Declara y asigna:
 *    - unsigned int u = 4000000000
 *    - long long ll = 9000000000000000000
 *    - unsigned long long ull = 18000000000000000000ULL
 *    - Imprime cada uno con su format specifier correcto.
 *
 * 3. Imprime sizeof de cada tipo extendido:
 *    short, unsigned int, long long, unsigned long long
 */
#include <stdio.h>

int main() {

    char A = 65;
    char B = 66;
    char C = 67;
    char D = 68;
    char E = 69;
    char F = 70;

    int aA = 65;
    int bB = 66;
    int cC = 67;
    int dD = 68;
    int eE = 69;
    int fF = 70;
    
    printf("%c = %d\n%c = %d\n%c = %d\n%c = %d\n%c = %d\n%c = %d\n",A,aA,B,bB,C,cC,D,dD,E,eE,F,fF);

    unsigned int u = 4000000000;
    long long ll = 9000000000000000000;
    unsigned long long ull = 18000000000000000000ULL;

    printf("u: %u\n",u);
    printf("ll: %lld\n",ll);
    printf("ull: %llu\n", ull);

    printf("tamaño de short: %zu bytes\n",sizeof(short));
    printf("tamañom de unsigned: %zu bytes\n",sizeof(unsigned int));
    printf("tamaño de long long: %zu bytes\n",sizeof(long long));
    printf("tamaño de unsigned long long: %zu bytes\n", sizeof(unsigned long long));

    return 0;
}
