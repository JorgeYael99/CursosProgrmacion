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

    printf("operadores aritmeticos\n");
    printf("%d\n",x + y);
    printf("%d\n",x - y);
    printf("%d\n",x * y);
    printf("%d\n",x / y);
    printf("%d\n",x % y);

    printf("incremento\n");
    int z = 5;
    ++z;
    printf("%d\n",z);
    --z;
    printf("%d\n",z);

    int peopleInRoom = 0;

    // 3 personas entran
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    printf("Personas entrando: %d\n",peopleInRoom);

    // 1 persona salio
    peopleInRoom--;

    peopleInRoom++;

    printf("Personas entrando: %d\n",peopleInRoom);

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
    printf("Operadores de asignacion compuestos\n");
    int s = 5; printf("%d\n",s);
    s += 1; printf("%d\n",s); 
    s -= 1; printf("%d\n",s);
    s *= 1; printf("%d\n",s);
    s /= 1; printf("%d\n",s);
    s %= 1; printf("%d\n",s);

    printf("Operadores de asignacion para bits\n");

    int a = 6;
    a &=10;
    printf("a: %d\n",a);



    

    

    

    

    return 0;
}

