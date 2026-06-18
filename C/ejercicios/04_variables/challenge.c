/*
 * Challenge: Perfil de estudiante
 *
 * Declara variables para almacenar la siguiente información
 * de un estudiante. Nómbralas con camelCase o snake_case.
 *
 * Datos:
 *   - Nombre completo (char[])  → "Lucia Martinez"
 *   - ID del estudiante (int)   → 12345
 *   - Edad (int)                → 20
 *   - Promedio (float)          → 9.5
 *   - Grupo (char)              → 'B'
 *
 * Luego imprime un resumen como este:
 *
 *   ESTUDIANTE: Lucia Martinez (ID: 12345)
 *   Edad: 20 anios  |  Grupo: B
 *   Promedio: 9.5
 *
 * EXTRA: Cambia el promedio a 10.0 y el grupo a 'A',
 * y vuelve a imprimir el resumen completo.
 */
#include <stdio.h>

int main() {
    char nombre_completo[]  = "Lucia Martinez";
    int ID_estudiante = 12345;
    int edad= 20;
    float promedio= 9.5;
    char grupo = 'B';

    printf("ESTUDIANTE: %s (ID: %d)\n",nombre_completo,ID_estudiante);
    printf("Edad: %d anios\t|\tGrupo: %c\n",edad,grupo);
    printf("Promedio: %.1f\n\n",promedio);
    
    promedio = 10.0;
    grupo='A';

    printf("ESTUDIANTE: %s (ID: %d)\n",nombre_completo,ID_estudiante);
    printf("Edad: %d anios\t|\tGrupo: %c\n",edad,grupo);
    printf("Promedio: %.1f\n",promedio);

    return 0;
}
