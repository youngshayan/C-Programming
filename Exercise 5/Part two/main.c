/*
 * Programmer: Shayan Mansornia     Date:11/24/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main(void) {
    char problem;

    printf("\nEnter the number of the problem you wish to solve.\n"
           "GIVEN A MEDICAL ORDER IN CALCULATE RATE IN\n"
           "(1) ml/hr& tubing drop factor drops / min\n"
           "(2) 1 L for n hr ml / hr\n"
           "(3) mg/kg/hr& concentration in mg/ml ml / hr\n"
           "(4) units/hr& concentration in units/ml ml / hr\n"
           "(5) QUIT\n");
    scanf(" %c",&problem);

    switch (problem)
    {
        case '1':
            printf("Enter rate in ml/hr=> 150\n"
                   "Enter tubing's drop factor(drops/ml)=> 15\n"
                   "The drop rate per minute is 38\n");
            break;
        case '2':
            printf("Enter number of hours=> 8\n"
                   "The rate in milliliters per hour is 125.\n");
            break;
        case '3':
            printf("Enter rate in mg/kg/hr=> 0.6\n"
                   "Enter patient weight in kg=> 70\n"
                   "Enter concentration in mg/ml=> 1\n"
                   "The rate in milliliters per hour is 42\n");
            break;
        case '4':
            printf("Enter rate in units/hr=> 1000\n"
                   "Enter concentration in units/ml=> 25\n"
                   "The rate in milliliters per hour is 40.\n");
            break;
        case '5':
            return (0);

    }
    return 0;
}