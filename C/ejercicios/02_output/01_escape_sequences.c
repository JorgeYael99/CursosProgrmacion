/*
 * Ejercicio: Secuencias de escape
 *
 * Escribe un programa que imprima este ticket exactamente
 * igual (usa \n, \t, \\, \"):
 *
 * ============================
 *     "SUPERMERCADO YAEL"
 * ============================
 * Producto        Precio
 * Pan             $2.50
 * Leche           $3.20
 * Huevos          $4.80
 * ----------------------------
 * Total:         $10.50
 * ----------------------------
 * Ruta: C:\tickets\ventas.txt
 * Gracias por su compra!
 *
 * PISTA: para imprimir \ necesitas \\.
 *        para imprimir " necesitas \".
 */
#include <stdio.h>

int main() {
    printf("============================\n");
    printf("    \"SUPERMERCADO YAEL\"\n");
    printf("============================\n");
    printf("Producto\tPrecio\n");
    printf("Pan\t\t$2.50\n");
    printf("Leche\t\t$3.20\n");
    printf("Huevos\t\t$4.80\n");
    printf("----------------------------\n");
    printf("Total:\t\t$10.50\n");
    printf("----------------------------\n");
    printf("Ruta: C:\\tickets\\ventas.txt\n");
    printf("Gracias por su compra!\n\n");



    return 0;
}
