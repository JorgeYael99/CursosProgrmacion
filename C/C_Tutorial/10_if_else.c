#include <stdio.h>
#include <stdbool.h>

int main(){
    /*
    ############## if ##############
    */

    printf("############## if ##############\n");
    // Utilice la instrucción if para especificar un bloque de 
    // código que se ejecutará si se cumple una condición.

    if (20>10) {
        printf("20 es mayor que 10\n");
    }

    int x = 20;
    int y = 18;
    if (x>y) {
        printf("20 is greater than 18\n");
    }

    bool isGreater = x>y;
    if (isGreater) {
        printf("x is greater than y\n");    
    }

    /*
    ############## else ##############
    */
    printf("############## else ##############\n");
    // Utilice la instrucción else para especificar un bloque
    // de código que se ejecutará si la condición es falsa.
    /*
    if (condition) {
     // block of code to be executed if the condition is true
    } else {
    // block of code to be executed if the condition is false
    }*/

    int time = 20;

    if (time<18) {
        printf("Good day\n");    
    } else {
        printf("Good evening\n");
    }

    bool isDay= time<18;
    if (isDay) {
        printf("Buen dia\n");    
    } else {
        printf("Buenas noches\n");
    }

        /*
    ############## else if ##############
    */

    printf("############## else if ##############\n");

    // Utiliza la instrucción `else if` para especificar una nueva 
    // condición y comprobar si la primera es falsa. Puedes usar 
    // `else if` para comprobar varias condiciones, una tras otra.
    
    time = 20;
    printf("Time: %d hrs\n",time);
    
    if (time<12) {
        printf("Good morning\n")    ;
    }   else if (time<18) {
        printf("Good day\n");    
    }   else {
        printf("Good evening\n");
    }

    /*
    ############## Short Hand If...Else ##############
    */
    printf("############## Short Hand If...Else ##############\n");
    /*
    También existe una forma abreviada de if...else, conocida como operador ternario 
    porque utiliza tres operandos. 
        El operador ternario devuelve un valor en función de una condición: 
    si la condición es verdadera, devuelve el primer valor; de lo contrario, 
    devuelve el segundo valor.
        Se puede usar para reemplazar varias líneas de código con una 
    sola, y se usa frecuentemente para reemplazar sentencias if...else simples.
    */
    
    // (condition) ? instruction true : instruction false;
    
    time = 21;
    printf("Time: %d\n",time);
    (time<20) ? printf("Buen día\n") : printf("Buenas noches\n");
    
    bool esDia = time<20;
    (esDia) ? printf("BUEN DIA!!!\n") : printf("BUENAS NOCHES!!!!!\n");

    /*
    ############## Nested if ##############
    */
    printf("############## Nested If ##############\n");
    
    /*
    También puedes colocar una sentencia if dentro de otra sentencia if. Esto se conoce como sentencia if anidada. Una sentencia if anidada te permite comprobar una condición solo si otra condición ya es verdadera.
    */

    x = 15;
    y = 25;
    if (x > 10) {
        printf("x es mayor que 10\n");
        if (y > 20) {
            printf("y tambien es mayor que 20\n\n");
        }
    }

    int age = 20;
    bool isCitizen = false;
    char true1[]="Si";
    char false1[]="No";

    printf("Edad: %d\n",age);
    printf("¿Es ciudadano? %s\n", (isCitizen==true) ? true1 : false1 );

    if (age>=18) {
        printf("Tiene la edad suficiente para votar\n");
        if (isCitizen) {
            printf("Y usted es ciudano, puede votar\n");        
        } else {
            printf("No es ciudadano, no puede votar\n");
        }    
    } else {
        printf("Es menor de edad\n");
    }

    /*
    ############## Logical Operators in Conditions ##############
    */
    printf("############## Logical Operators in Conditions ##############\n");

    /*
    Puedes combinar o invertir condiciones usando operadores lógicos. 
    Estos funcionan junto con if, else y else if para construir decisiones más complejas.
    
    - && (AND) - Todas las condiciones deben ser verdaderas
    - || (OR) - al menos una condición debe ser verdadera
    -  ! (NOT) - invierte una condición (verdadero → falso, falso → verdadero)*/

    int a = 200;
    int b = 50;
    int c = 500;

    if (a>b && c>a) {
        printf("Ambas condiciones son verdaderas\n");
    }

    if (a>b || a>c) {
        printf("alguna de las condiciones son verdaderas\n");
    }

    a = 50;
    b = 200;
    if(!(a>b)){
        printf("a NOT es mayor que b\n");
    }

    // ejemplo: Debes haber iniciado sesión y, además, 
    // ser administrador o tener una autorización de seguridad de alto nivel (nivel 1 o 2):

    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 1; // highest = 1

    if (isLoggedIn && (isAdmin || securityLevel<=2)) {
        printf("✅ Acceso concedido\n");
    } else {
        printf("❌ Acceso denegado\n");
    }

    /*
    ############## Real life examples ##############
    */
    printf("############## Real life examples ##############\n");

    // ingresar el código correcto

    int code = 321;
    printf("Code: %d\n",code);
    (code == 321) ? printf("Correct code.\nThe door is open\n"): printf("Incorrect code.\nThe door remains closed.\n");

    // Validar si el numero es positivo, negativo o es 0 
    int myNum = 0;

    if (myNum>0) {
        printf("The number is positive\n");
    }   else if (myNum<0) {
        printf("The number is negative\n");
    }   else {
        printf("The number is 0\n");
    }

    // Averiguar si un numero es positivo o negativo

    if (myNum%2==0) {
        printf("El numero es par\n");    
    } else {
        printf("El numero es impar\n");
    }

    // Revisar la temperatura

    int temperature = 20;

    if (temperature<0) {
        printf("¡Está helando!\n");
    } else if (temperature <= 20) {
        printf("El clima está templado");    
    } else {
        printf("¡Hace calór\n");
    }
}