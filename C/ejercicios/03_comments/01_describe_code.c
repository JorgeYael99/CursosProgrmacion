/*
 * Ejercicio: Documenta el código
 *
 * El programa de abajo funciona, pero no tiene comentarios.
 * Agrega comentarios (// o /* *//* explicando QUÉ hace cada
 * línea o bloque importante.
 *
 * No modifiques el código, solo agrega comentarios en español.
 */
 
#include <stdio.h>

int main() {
    //inicializamos variables todas del tipo entero llamadas base, altura y calculamos el área
    int base = 10;
    int altura = 5;
    int area = base * altura / 2;
    //Mandamos a imprimir los valores de base, altura y el resultado del area del triangulo
    printf("Base: %d\n", base);
    printf("Altura: %d\n", altura);
    printf("Area del triangulo: %d\n", area);
    // inicializamos la variable perimetro donde calculamos el perimetro de un triangulo
    int perimetro = base * 3;
    printf("Perimetro del triangulo equilatero: %d\n", perimetro); // Se manda a imprimir en pantalla el resultado del perimetro

    return 0;
}
