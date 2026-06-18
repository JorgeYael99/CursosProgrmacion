/*
 * Challenge: Calculadora de distancia
 *
 * Un auto viaja a 120.5 km/h durante 2 horas y 45 minutos.
 *
 * 1. Declara las variables necesarias (usa tipos adecuados:
 *    float para velocidad, int o float para tiempo, etc.)
 *
 * 2. Calcula la distancia recorrida: distancia = velocidad * tiempo
 *    El tiempo debe estar en horas (2h 45min = 2.75h).
 *
 * 3. Muestra el resultado en km con 2 decimales.
 *
 * 4. Convierte la distancia a millas (1 km = 0.621371 millas)
 *    y muéstrala con 2 decimales también.
 *
 * 5. EXTRA: Calcula cuánto tiempo (en horas) tardaría en
 *    recorrer esa misma distancia a 90 km/h.
 *
 * Salida esperada:
 *   Velocidad: 120.50 km/h
 *   Tiempo:    2.75 horas
 *   Distancia: 331.38 km
 *   Distancia: 205.90 millas
 *   A 90 km/h tardaria: 3.68 horas
 */
#include <stdio.h>

int main() {
    float velocidad = 120.5f;
    float tiempo = 2.75f;

    printf("Velocidad: %.2f km/h\n",velocidad);
    printf("Tiempo: %.2f horas\n", tiempo);

    float distanciaKm = velocidad * tiempo;

    printf("Distancia: %.2f km\n",distanciaKm);

    float distanciaMillas = distanciaKm*0.621371;
    printf("Distancia: %.2f millas\n",distanciaMillas);

    velocidad = 90.0f;
    tiempo = distanciaKm/velocidad;

    printf("A %.2f km/h tardaría: %.2f horas\n",velocidad,tiempo);

    return 0;
}
