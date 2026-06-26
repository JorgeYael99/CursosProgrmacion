#include <stdio.h>

/**/
int var=5;
void mostrar_numeros(){
    int var1=2, var2;
    var2=var1+var;
    printf("El valor de mi variable global es %d\n",var2);
}

int main(){
    int var1=34, var2;
    var2=var1+var;
    printf("El valor de mi variable global es %d\n",var2);
    mostrar_numeros();
    
    /* #### TIPOS DE DATOS ####*/
    float price = 12.23f;
    printf("El precio agregado es de: %.1f\n", price);
    double x1 = 2.12234345345;
    printf("el valor de x1 es: %f\n\n",x1);

    float celsius;
    double fahrenheit;
    celsius=25.0f;
    fahrenheit=(celsius*9.0/5.0)+32;

    printf("%.1f deegres Celsius is equal to %.1f deegres Fahrenheit\n",celsius,fahrenheit);
    
    /*
    Este es un error al no indicar un especificador de formato (format specifier)
    int myNum =12;
    printf(myNum);*/

    /*
    #### FORMAT SPECIFIER ####
    */

    /*
    Format Specifier	Data Type	
            %d or %i	int	
            %f or %F	float	
            %lf         double	
            %c          char	
            %s	        Used for strings (text)
    Nota: Es importante que utilice el especificador de formato correcto para el tipo de datos especificado. De lo contrario, el programa podría generar errores o incluso bloquearse.
    */
    int x=10;//Integer (whole number)
    float y=10.10f; // Floating point number
    char z='h'; // Character


    printf("x %d\n",x);
    printf("y %f\n",y);
    printf("z %c\n",z);


    // Print values without values
    printf("mi numero favorito es %d\n",12);
    printf("mi letra favorita es: %c\n",'c');

    /*#### Change Variable Values ####*/

    // replace the old one
    int num= 12;
    printf("numero original: %d\n", num);
    num=10; // now num is 10
    printf("numero nuevo: %d\n", num);
    // se puede asignar el valor de una variable a otra
    int myOtNum = 21;
    num = myOtNum;
    printf("otro numero asignado de otra variable: %d\n", num);
    

    /*#### Declarar multiples variables ####
    */
    int e = 1, f=2, g=3; // se asignan 3 variables estas con su respectivo valor
    printf("La sumatoria de las letras e, f, g es: %d\n",e+f+g); // para la suma de estas variables, todas tienen que ser del mismo tipo de dato
    int q,a,d;
    q=a=z=100; // se asigna el mismo valor a 3 variables
    printf("%d\n",q+a+z); 

    // ### nombre de variables
    // Normalmente las variables se usan para alamecenar información, datos, numeros para una formula
    // Podemos usar CamelCase o Snake_case ppara nombrar estas mismas
    // Student data
    int studentID = 12;
    int studentAge = 8;
    float studentFee = 80.10;
    printf("######## INFORMACIÓN DE UN ESTUDIANTE ###########\n");
    printf("Id del estudiante: %d\n",studentID);
    printf("Edad del estudiante: %d\n",studentAge);
    printf("Cuota del estudiante: %.1f\n",studentFee);
    printf("#################################################\n");

    //calculate the area of a rectangle
    int lenght = 4;
    int width = 4;
    int area;

    area = lenght*width; // Consejo: Los cálculos generalmente se realizan primero y el resultado se almacena en una variable antes de imprimirse.

    printf("Lenght: %d\n",lenght);
    printf("Width: %d\n", width);
    printf("Area of the rectangle is: %d\n",area); 
    printf("#################################################\n");
    return 0;
}

