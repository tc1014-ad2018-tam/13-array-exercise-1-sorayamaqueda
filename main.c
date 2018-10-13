/*
 * This program is made up to ask the user for a series of numbers which will be saved within an array so that they can
 * be displayed both progressively as regressively. The size of the array wil be defined by the user.
 *
 * Author: Soraya Maqueda
 * Date: 13.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>

int main() {
    //Variable of control to know how many numbers the user is going to introduce.
    int i;

    //Here we ask the user how many values are there going to be inside the array.
    printf("How many numbers are you going to introduced: \n");
    scanf("%i", &i);

    //Array for saving the numbers that the user introduces.
    int num[i];

    //This cycle is to as the user for the numbers until the size that he defined is met.
    for(int k= 0; k < i; k++){
        printf("Give me a number: \n");
        scanf("%i", &num[k]);
    }

    //Printing of the array in progressive order.
    printf("The numbers that you introduced are: \n");
    for (int j = 0; j < i; j++){
        printf("%i\t", num[j]);
    }

    //Printing of the array in regressive order.
    printf("\nThe numbers written backwards are: ");
    for (int r = i-1; r >= 0; r--) {
        printf("%i\t", num[r]);
    }

    return 0;
}