/*
 * Programmer: Shayan Mansornia     Date:11/15/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 * Discovering value of x and y in axis
 */
#include <stdio.h>
int main (void){
    int a,b,c,d,A,B;
    printf("\nEnter the first number:");
    scanf("%d",&a);

    printf("\nEnter the second number:");
    scanf("%d",&b);

    printf("\nEnter the third number:");
    scanf("%d",&c);

    printf("\nEnter the fourth number:");
    scanf("%d",&d);


    if (a>=0 , b>=0) {
        printf("\nA Point Is Positive:A=(%d)+(%d)", a, b);
    }
    else  {
        printf("\nA Point Is Negative:A=(%d)+(%d)", a, b);
    }
    if (c>=0 , d>=0 ){
        printf("\nB Point Is Positive:B=(%d)+(%d)", c, d);
    }
    else  {
        printf("\nB Point Is Negative:B=(%d)+(%d)", c, d);
    }


    return 0;
}

