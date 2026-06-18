/*
 * Ejercicio: Múltiples variables
 *
 * 1. Declara 3 enteros (a, b, c) en una línea con valores
 *    10, 20, 30 respectivamente.
 *
 * 2. Declara 3 enteros (x, y, z) y asígnales el mismo valor
 *    100 en una sola línea.
 *
 * 3. Calcula e imprime:
 *    - a + b + c
 *    - a * b
 *    - (a + b + c) / 3   (promedio, ¿funciona bien con enteros?)
 *
 * 4. Caso real:
 *    - numProductos (int) = 3
 *    - precioUnitario (float) = 12.50
 *    - Calcula total = numProductos * precioUnitario
 *    - Imprime el total con 2 decimales
 */
#include <stdio.h>

int main() {

    int a = 10, b = 20, c = 30;
    int x = 100, y = 100, z = 100;
    printf("a + b + c = %d\n",a+b+c);
    printf("a * b= %d\n", a*b);
    printf("(a+b+c)/3= %d\n",(a+b+c)/3);// Esto funciona porque son numeros enteros exactos

    // Caso real

    int numProductos = 3;
    float precioUnitario = 12.50f;
    float calTotal = numProductos * precioUnitario;

    printf("Numero de productos: %d\n",numProductos);
    printf("Precio unitario: %.2f\n",precioUnitario);
    printf("Calculo total: %.2f\n",calTotal);

    // --- escribe aquí ---


    return 0;
}
