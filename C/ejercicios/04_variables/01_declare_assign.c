/*
 * Ejercicio: Declarar, asignar y cambiar
 *
 * 1. Declara las siguientes variables en una sola línea:
 *    - edad (int) = 21
 *    - precio (float) = 15.99
 *    - letra (char) = 'X'
 *
 * 2. Imprime las tres con sus format specifiers.
 *
 * 3. Cambia TODAS las variables a nuevos valores:
 *    - edad = 22
 *    - precio = 9.99
 *    - letra = 'Z'
 *
 * 4. Vuelve a imprimirlas (deben mostrar los nuevos valores).
 *
 * 5. Declara una nueva variable "copia" y asígnale el valor
 *    actual de edad. Imprime copia.
 */
#include <stdio.h>

int main() {
    int edad = 21; float precio = 15.99f; char letra = 'X';
    printf("Edad: %d. Precio: %.2f. Letra: %c\n",edad,precio,letra);
    
    edad =22;
    precio = 9.99f;
    letra= 'Z';
    printf("Edad: %d. Precio: %.2f. Letra: %c\n",edad,precio,letra);

    int copia = edad;
    printf("Copia: %d\n",copia);
    // --- escribe aquí ---


    return 0;
}
