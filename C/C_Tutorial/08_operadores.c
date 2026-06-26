// Operadores
#include <stdio.h>

int main(){
    //############## Operadores aritmeticos ###########

    /*
    Operator	Name	        Description	                        Example	
    +	    Addition	    Adds together two values	            x + y	
    -	    Subtraction	    Subtracts one value from another	    x - y	
    *	    Multiplication	Multiplies two values	                x * y	
    /	    Division	    Divides one value by another	        x / y	
    %	    Modulus	        Returns the division remainder	        x % y	
    ++	    Increment	    Increases the value of a variable by 1	++x	
    --	    Decrement	    Decreases the value of a variable by 1	--x
    */

    // example

    int x = 10;
    int y = 3;

    printf("############# arithmetics operators #############\n");
    printf("x + y = %d\n",x + y);
    printf("x - y = %d\n",x - y);
    printf("x * y = %d\n",x * y);
    printf("x / y = %d\n",x / y);
    printf("x %% y = %d\n",x % y);
    // USAR DOBLE % (%%) PARA QUE SALGO EL SIGNO DE PORCENTAJE EN EL COMENTARIO SIN QUE 
    // HAYA CONFLICTO.

    printf("------- Increment -------\n");
    int z = 5;
    ++z;
    printf("%d\n",z);
    printf("------- Decrement -------\n");
    --z;
    printf("%d\n",z);

    int peopleInRoom = 0;
    printf("ejemplo: Gente en el cuarto: %d\n",peopleInRoom);

    // 3 personas entran
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    printf("Personas entrando: %d\n",peopleInRoom);

    // 1 persona salio
    peopleInRoom--;

    // peopleInRoom++;

    printf("Personas dentro del cuarto: %d\n",peopleInRoom);

    /*############### C Assignment Operators ###################*/
    /*

    Operator	Example	    Same As	
    =	        x = 5	    x = 5	
    +=	        x += 3	    x = x + 3	
    -=	        x -= 3	    x = x - 3	
    *=	        x *= 3	    x = x * 3	
    /=	        x /= 3	    x = x / 3	
    %=	        x %= 3	    x = x % 3	
    #######################################
    &=	        x &= 3	    x = x & 3	
    |=	        x |= 3	    x = x | 3	
    ^=	        x ^= 3	    x = x ^ 3	
    >>=	        x >>= 3	    x = x >> 3	
    <<=	        x <<= 3	    x = x << 3	

    */
    printf("############# Assigment operators #############\n");
    int s = 5; printf("s = :%d\n",s);
    s += 1; printf("s += :%d\n",s); 
    s -= 1; printf("s -= :%d\n",s);
    s *= 1; printf("s *= :%d\n",s);
    s /= 1; printf("s /= :%d\n",s);
    s %= 1; printf("s %%= :%d\n",s);

    printf("############# COMPARISON OPERATORS #############\n");

    /*
    Operator	Name	                    Example	Description	
        ==  	Equal to	                x == y	Returns 1 if the values are equal	
        !=	    Not equal	                x != y	Returns 1 if the values are not equal	
        >	    Greater than	            x > y	Returns 1 if the first value is greater than the second value	
        <	    Less than	                x < y	Returns 1 if the first value is less than the second value	
        >=	    Greater than or equal to	x >= y	Returns 1 if the first value is greater than, or equal to, the second value	
        <=	    Less than or equal to	    x <= y	Returns 1 if the first value is less than, or equal to, the second value
    */

    int age = 18;

    printf("\"Equal to\"\n\tage == 18: %d\n",age==18); 
    printf("\"Not equal\"\n\tage != 18: %d\n",age!=18); 
    printf("\"Greater than\"\n\tage  > 18: %d\n",age>18);
    printf("\"Less than\"\n\tage  < 18: %d\n",age<18);
    printf("\"Greater than or equal to\"\n\tage <= 18: %d\n",age<=18); 
    printf("\"Less than or equal to\"\n\tage >= 18: %d\n",age>=18); 

    //example
    int password = 6;
    printf("La contraseña es mayor o igual a 8 caracteres? %d\n",password>=8);
    printf("La contraseña es menor a 8 caracteres? %d\n",password<8);
    printf("La contraseña es igual a 6 caracteres? %d\n",password==6);

    /*
    ############# LOGICAL OPERATORS #############
    */

    printf("############# LOGICAL OPERATORS #############\n");

    /*
    Operator	Name	Example         	Description	Try it
        && 	    AND	    x < 5 &&  x < 10	Returns 1 if both statements are true	
        || 	    OR	    x < 5 || x < 4	    Returns 1 if one of the statements is true	
        !	    NOT	    !(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1
    */
    printf("OPERADOR LOGICO \"AND\"\n");
    printf("0 && 0: %d\n",0 && 0);
    printf("1 && 0: %d\n",1 && 0);
    printf("0 && 1: %d\n",0 && 1);
    printf("1 && 1: %d\n",1 && 1);

    printf("OPERADOR LOGICO \"OR\"\n");
    printf("0 || 0: %d\n",0 || 0);
    printf("1 || 0: %d\n",1 || 0);
    printf("0 || 1: %d\n",0 || 1);
    printf("1 || 1: %d\n",1 || 1);

    printf("OPERADOR LOGICO \"NOT\"\n");
    printf("0 && 0: %d\n",!(0 && 0));
    printf("1 && 0: %d\n",!(1 && 0));
    printf("0 && 1: %d\n",!(0 && 1));
    printf("1 && 1: %d\n",!(1 && 1));

    int A = 0;
    int B = 0;

    printf("PRUEBA MANUAL: %d\n",!(!(A>=B) || !(A<=B)) && (A==B));



    /*
    ############# OPERATOR PRECEDENCE (PRIORITY) #############
    */

    printf("############# OPERATOR PRECEDENCE (PRIORITY) #############\n");
    /*
    Order of Operations
    Here are some common operators in C, from highest to lowest priority:

    () - Parentheses
    *, /, % - Multiplication, Division, Modulus
    +, - - Addition, Subtraction
    >, <, >=, <= - Comparison
    ==, != - Equality
    && - Logical AND
    || - Logical OR
    = - Assignment
    */

    int g = 2;
    int h = 3;

printf("El resultado del calculo que se asigno para las variables g = %d y h = %d es: %.2f\n",g,h,((g+h)*5)/(float)10);





    


    /*
    OPERADORES DE BITS
    */
    printf("Operadores de asignacion para bits\n");

    int a = 6;
    a &=10;
    printf("a: %d\n",a);

    int b= 7;
    b |= 5;
    printf("%d\n",b);

    int c = 0;
    c ^=1;
    printf("%d\n",c);

    int izq = 1;
    printf("valor original de variable \"izq\": %d\n",izq );
    izq <<=3;
    printf("valor variable \"izq\" moviendo el 1 en binario a dos espacios: %d\n",izq );

    int der = 128;
    printf("valor original de variable \"der\": %d\n",der );
    der >>=6;
    printf("valor variable \"der\" moviendo el 1 en binario a n espacios: %d\n",der);

    int year = 2100;
    printf("El año es bisisesto? %d\n",(year % 4 == 0 && year % 100 != 0) || year % 400 == 0);


    return 0;
}

