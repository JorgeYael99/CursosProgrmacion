/*
 * Ejercicio: Conversión explícita (casting)
 *
 * 1. Calcula el promedio de 3 notas (int: 7, 8, 9) USANDO CAST
 *    para que el resultado NO se trunque. Imprime con 1 decimal.
 *    SINTAXIS: (tipo)expresion
 *
 * 2. Declara double pi = 3.14159265. Conviértelo a int y a float.
 *    Imprime los tres valores. ¿Cuánta precisión se pierde en cada paso?
 *
 * 3. Precio: double 19.99. Conviértelo a int (truncamiento).
 *    Luego haz (int)(precio + 0.5) — ¿qué efecto tiene el +0.5?
 *    Comenta con // qué está pasando.
 */
#include <stdio.h>

int main() {

    //1.-
    int first = 7;
    int sec= 8;
    int therd= 9;
    float promedio = (float)(first+sec+therd)/3;
    printf("Promedio calculado total: %f\n",promedio);

    // 2.-
    double pi = 3.14159265;
    int piInt = pi;
    float piFloat= pi;
    printf("Pi con double: %lf\n",pi);
    printf("Pi con Int: %d\n",(int)pi);
    printf("Pi con Float: %f\n",(float)pi);

    //3.-
    double precio = 19.99;
    printf("Double \"precio\": %.2lf\n",precio);
    int truncado = (int)precio;
    printf("Double \"precio\" con int: %d\n",truncado);
    int redondeado=(int)(precio + 0.5);
    printf("Double \"precio\" ya con int pero se agrega 0.5: %d\n",redondeado);//  19.000000




    return 0;
}
