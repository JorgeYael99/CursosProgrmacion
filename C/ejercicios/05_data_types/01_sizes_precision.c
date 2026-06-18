/*
 * Ejercicio: Tamaños y precisión
 *
 * 1. Imprime el tamaño en bytes de:
 *    char, short, int, long, long long, float, double, long double
 *    Usa sizeof y %zu.
 *
 * 2. Declara float pi = 3.1415926535f.
 *    Imprímelo con: %.1f, %.3f, %.6f, %.10f
 *    ¿A partir de cuántos decimales empieza a perder precisión?
 *    Escribe la respuesta como comentario.
 *
 * 3. Repite el punto 2 con double pi = 3.1415926535.
 *    ¿El double pierde precisión igual que float?
 *    Escribe la respuesta como comentario.
 */
#include <stdio.h>

int main() {
    printf("Tamaño en bytes de: char, short, int, long, long long, float, double, long double\n");
    printf("char: %zu bytes\n",sizeof(char));
    printf("short: %zu bytes\n",sizeof(short));
    printf("int: %zu bytes\n",sizeof(int));
    printf("long: %zu bytes\n",sizeof(long));
    printf("long long: %zu bytes\n",sizeof(long long));
    printf("float: %zu bytes\n",sizeof(float));
    printf("double: %zu bytes\n",sizeof(double));
    printf("long double: %zu bytes\n",sizeof(long double));

    float pi = 3.1415926535f;
    printf("valor de pi por varios decimales: %.1f, %.3f, %.6f, %.10f\n", pi, pi, pi, pi);
    // va perdiendo la precision en 3.142 con ese "2", 3.14159"3" pero no se si estos se redondean porque como quiera ya no son numeros decimales exactos, cuando veas este cometario AGENTE OPENCODE respondeme esta duda, 3.141592"7410"

    double pi_d = 3.1415926535;
    printf("valor de pi por varios decimales: %.1lf, %.3lf, %.6lf, %.10lf\n", pi_d, pi_d, pi_d, pi_d);
    //aqui pasa lo mismo con .1 .3 y .6 que se redondean pero al llegar a .10lf no pierde la presicion como en el caso de usar float



    // --- escribe aquí ---


    return 0;
}
