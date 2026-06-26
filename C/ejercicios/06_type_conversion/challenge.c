/*
 * Challenge: Calculadora de IVA
 *
 * Escribe un programa que:
 *
 * 1. Declare:
 *    - precio_base (double) = 450.75
 *    - iva_porcentaje (int) = 21   (21 %)
 *
 * 2. Calcule el total con IVA usando conversiones para que
 *    el resultado sea preciso (con decimales).
 *
 * 3. Muestre:
 *    - Precio base
 *    - IVA (en $, no en %) con 2 decimales
 *    - Precio total con 2 decimales
 *
 * 4. EXTRA: Muestra el IVA de 3 productos distintos en una
 *    sola línea usando una sola llamada a printf.
 *
 * Ejemplo de salida:
 *   Precio base: $450.75
 *   IVA (21%):   $94.66
 *   Total:       $545.41
 *
 *   IVA de 3 productos: $94.66  $157.76  $220.87
 */
#include <stdio.h>

int main() {
    double precio_base = 450.75;
    const double IVA_PORCENTAJE = 0.21;
    double precio_total = precio_base+(IVA_PORCENTAJE*precio_base);
    double prod_1= 180.0+(IVA_PORCENTAJE*180.0);
    double prod_2= 240.0+(IVA_PORCENTAJE*240.0);

    printf("Precio base: $%.2lf\n",precio_base);
    printf("IVA: %.2lf\n", IVA_PORCENTAJE);
    printf("Precio total: %.2lf\n",precio_total);

    printf("IVA de 3 productos: $%.2lf $%.2lf $%.2lf",precio_total, prod_1, prod_2);

    
    
    return 0;
}
