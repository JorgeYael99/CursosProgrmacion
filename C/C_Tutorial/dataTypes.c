// Data types
#include <stdio.h>

int main(){

    printf("############### DATA TYPES ###############\n");
int a = 1;      // 2 o 4    bytes whole numbers (numeros enteros)
float b= 2.1f;    // 4 bytes  fractional numbers (numeros fraccionales)
double c= 3.121212;   // 8 bytes  fractional numbers (numeros fraccionales)
char d='a';     // 1 byte   single character/letter/number, or ASCII values

// Basic format specifier
printf("especificador de formato para:\n"); 
printf("Enteros (int).- %d\n",a);           // %d o %i 
printf("Flotantes (float).- %.1f\n",b);     // %f o %F (o %.1f)
printf("Doble (double).- %.1lf\n",c);       // %lf (o %.1lf)
printf("Caracter (char).- %c\n",d);           //%c

/*
############## char type #################
*/

printf("############### CHAR TYPE ###############\n");
char myGrade = 'A';
printf("%c\n", myGrade);

char q = 64, w = 66, e = 67, r = 68; // se agregan carcteres ASCII, de preferencia del num 32 al 126
printf("%c\n",q);
printf("%c\n",w);
printf("%c\n",e);
printf("%c\n",r);

// Para almacenar varios caracteres (o palabras completas), utilice cadenas (de las que aprenderá más en un capítulo posterior).
char myText[] = "hello";
printf("%s\n",myText);

/*
######### Numbers ############
*/
printf("############### NUMBERS ###############\n");
int myInt = 10;
printf("myInt %d\n",myInt);

float myFloat = 10.10;
printf("myFloat: %f\n",myFloat);

/*
La precisión de un valor de punto flotante indica cuántos dígitos puede tener el valor después del punto decimal. 
La precisión de float es de seis o siete dígitos decimales, mientras que las variables double tienen una precisión de 
aproximadamente 15 dígitos. Por lo tanto, suele ser más seguro usar double para la mayoría de los cálculos, pero tenga en 
cuenta que ocupa el doble de memoria que float (8 bytes frente a 4 bytes).
*/

double myDouble = 10.101010;
printf("myDouble: %lf\n",myDouble);

// Scientific Numbers
/*
En C, puedes escribir números de punto flotante muy grandes o muy pequeños usando notación científica. 
Esto se hace usando la letra e (o E), que significa "por 10 elevado a la potencia de
*/
float myScyNum = 1e2;
printf("Mi numero cientifico es: %f\n",myScyNum);

/*
############## Set Decimal Precision ##################
*/
//Si desea eliminar los ceros adicionales (establecer la precisión decimal), 
// puede usar un punto (.) seguido de un número que especifique cuántos dígitos deben mostrarse después del punto decimal.
printf("############### SET DECIMAL PRECISION ###############\n");

printf("Precision de 2 decimales para mi numero flotante: %.2f\n",myFloat);
printf("Precision de 3 decimales para mi numero flotante: %.3f\n",myFloat);

/*
######## Memory Size ######
*/
// El tamaño de memoria se refiere a cuánto espacio ocupa un tipo de dato en la memoria del ordenador. 
// Para obtener el tamaño real (en bytes) de un tipo de dato o variable, utilice el operador sizeof.

printf("############### MEMORY SIZE ###############\n");

printf("tamaño de myInt: %zu\n", sizeof(myInt));

    printf("char: %zu byte(s)\n", sizeof(char));
    printf("short: %zu byte(s)\n", sizeof(short));
    printf("int: %zu byte(s)\n", sizeof(int));
    printf("long: %zu byte(s)\n", sizeof(long));
    printf("long long: %zu byte(s)\n", sizeof(long long));
    printf("float: %zu byte(s)\n", sizeof(float));
    printf("double: %zu byte(s)\n", sizeof(double));
int z = 1, x=100,we=100,v=100,as=100,n=100;
int mtl = z+x+we+v+as+n;
printf("valor de mtl: %zu\n",sizeof(mtl));
/*
####################### Real-Life Example ####################
*/
printf("############### REAL-LIFE EXAMPLE ###############\n");
int items = 50;
float cost_per_item = 9.99f;
float total_cost = items*cost_per_item;
char currency = '$';

printf("Number of items: %d\n",items);
printf("Cost per item: %.2f%c\n",cost_per_item,currency);
printf("Total cost: %.2f%c\n",total_cost,currency);

/*
################ Extended Types ################
*/

/*
Type	                Size*	            Range (commonly)	                                                Format Specifier
short int	            2 bytes	            -32,768 to 32,767	                                                %hd

unsigned int	        2 or 4 bytes	    0 to 65,535 (2 bytes)                                               %u
                                            0 to 4,294,967,295 (4 bytes)	

long int	            4 or 8 bytes	    -2,147,483,648 to 2,147,483,647 (4 bytes)                           %ld
                                            -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes)	

long long int	        8 bytes	            -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	            %lld

unsigned long int	    4 or 8 bytes	    0 to 4,294,967,295 (4 bytes)                                        %lu
                                            0 to 18,446,744,073,709,551,615 (8 bytes)	

unsigned long long int	8 bytes	            0 to 18,446,744,073,709,551,615	                                    %llu

long double	            8, 12, or 16 bytes	Implementation-dependent, but more precision than double	        %Lf
******unsigned significa que el tipo solo puede almacenar valores no negativos (0 y superiores). *******
*/

int normalInt = 1000;
double normalDouble = 3.14;

short int small= -100; // %hd
unsigned int count = 25;// %u
long int big = 1234567890; // %ld
long long int veryBig=987987987987987987; // %lld
unsigned long int hu = 8798798798798798798LU; //%lu
unsigned long long int huge=9987987987987987989ULL; // %llu
long double precise = 9.987987987987987987987987987987987987987987987987987987987987987989879879879879898798798797898799879879879879898798L; // %Lf

printf("############### EXTENDED TYPES ###############\n");
printf("Normal int: %d\n",normalInt);
printf("Normal double: %lf\n",normalDouble);
printf("short int: %hd\n",small);
printf("Unsigned int: %u\n", count);
printf("long int: %ld\n",big);
printf("Long long int: %lld\n",veryBig);
printf("Unsigned long int: %lu\n",hu);
printf("Unsigned long long int: %llu\n",huge);
printf("Long double: %Lf\n",precise);

// Chech size
printf("############### Check size ###############\n");
printf("Size of \"Short int\": %zu bytes\n",sizeof(short int));
printf("Size of \"Unsigned int\": %zu bytes\n",sizeof(unsigned int));
printf("Size of \"Long int\": %zu bytes\n",sizeof(long int));
printf("Size of \"Long Long int\": %zu bytes\n",sizeof(long long int));
printf("Size of \"Unsined Long int\": %zu bytes\n",sizeof(unsigned long int));
printf("Size of \"Unsined Long Long int\": %zu bytes\n",sizeof(unsigned long long int));
printf("Size of \"Long Double\": %zu bytes\n",sizeof(long double));

return 0;
}
