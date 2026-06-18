/*
 * Ejercicio: Conversión implícita
 *
 * 1. Declara dos int: a = 7, b = 2.
 *    Haz a / b, ¿qué muestra? ¿Por qué?
 *
 * 2. Declara un int y asígnale un float literal (ej: 9.8).
 *    Imprime el int. ¿Qué pasa con los decimales?
 *
 * 3. Declara un char 'A', asígnaselo a un int e imprímelo con %d.
 *    Repite con 'Z' y '0'. ¿Qué números salen? (pista: ASCII)
 *
 * 4. Declara un float = 5, un int = 2. Multiplícalos y guárdalos
 *    en un float, luego en un int. Imprime ambos.
 *
 * PISTA: ningún cast manual, solo deja que C convierta solo.
 */
#include <stdio.h>

int main() {
    // 1.-
    int a = 7;
    int b = 2;
    int res = 7/2;
    printf("Resultado de 7/2 (enteros): %d\n",res);
    // Solo muestra el resultado de 3 porque estamos dividiendo entre enteros y no muestran decimales, truncamiento

    // 2.-
    int x = 9.8;
    printf("resultado del punto 2: %d\n",x);
    // No se imprimen los decimales, solo da el resultado de "9"

    //3.- 
    char A = 'A';
    int numero = A;
    printf("Res de char A %d\n",A);

    // 4.-
    float q = 5;
    int w = 2;
    float mul=q*w;
    int mulInt=q*w;

    printf("multiplicacion con float: %f\nmultiplicación con int: %d\n",mul,mulInt);
    
    return 0;
}
