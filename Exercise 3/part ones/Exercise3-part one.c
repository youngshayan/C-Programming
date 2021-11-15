/*
 * Programmer: Shayan Mansornia     Date:11/15/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *Calculation of x+y*y and x+y and x+y*y/x+y
 */
#include <stdio.h>
int main(void) {
    int x,y;
    int forml,formla;
    int sum;
    printf("\n Calculation of x+y*y and x+y");
    printf("\nEnter the first number(x):");
    scanf("%d", &x);
    printf("\nEnter the second number(y):");
    scanf("%d", &y);
    sum= (x + y);
    forml = (x + y) * y;
    formla =(x + y )*(y) / ( x + y);
    printf("\nx+y answer is -------> %d ", sum);
    printf("\nx+y*y answer is -------> %d ", forml);
    printf("\nx+y*y/x+y answer is -------> %d ", formla);
    return 0;
}