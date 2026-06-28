#include <stdio.h>
#include <stdbool.h>

int main (){
    printf("########### C BOOLEANS ###########\n");
    bool isProgrammingFun = true;
    printf("Is programming fun? %d\n",isProgrammingFun);
    bool isFishTasty = false;
    printf("Is Fish tasty? %d\n",isFishTasty);

    int x = 10;
    int y =9;
    bool isGreater = x>y;
    printf("10 is greater than 9? %d\n",isGreater);

    /*
    ########### Real life example ###########
    */

    printf("    ########### Real life example ###########\n");
    int myAge = 17;
    int votingAge = 18;

    printf("Tego la edad suficiente para votar? %d\n", myAge>=votingAge);

    if (myAge>=votingAge) {
        printf("Tienes la edad suficiente para votar\n");    
    } else {
        printf("No tienes la edad suficiente para votar\n");
    }


}