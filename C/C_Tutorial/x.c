#include <stdio.h>

int main(){
    // Declaración de variables
    int a;
    float b;
    char c;
    // Asignamos valor a Variables
    a = 10;
    b=20.10f;
    c='a';
    // Se manda a imprimir variables
    printf("Valor de a: %d\n",a);
    printf("Valor de b: %f\n",b);
    printf("Valor de c: %c\n",c);
    // Se asignan nuevos valores a las mismas variables
    a=101;
    b=200.200f;
    c='C';
    // Se mandan a imprimir las variables con sus nuevos valores
    printf("Nuevo valor para a: %d\n",a);
    printf("Nuevo valor para b: %f\n",b);
    printf("Nuevo valor para c: %c\n",c);
    // Dame ejemplo de como podemos agregar valores directo con format specifier
    printf("Agregamos valores directo en printf(int): %d\n",10);
    printf("Agregamos valores directo en printf(float): %f\n",10.10f);
    printf("Agregamos valores directo en printf(char): %c\n",'F');
    //Le asignamos el mismo valor de "a" a "a1"
    int a1;
    a1=a;
    printf("Valor de a1 (lo toma de la variable a): %d\n", a1);
    // Incluso se puede asignar el valor de "a1" a "a"
    a=a1;
    printf("Valor de a1 se asigna a \"a\": %d\n",a);
    return 0;
}