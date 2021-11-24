/*
 * Programmer: Shayan Mansornia     Date:11/24/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main() {
    char vol;
    int fact=1,i,Add,Sub,Mul,Div,Fact,num1,num2;


    printf("\n1: Addition\n"
           "2: Subtraction\n"
           "3: Multiplication\n"
           "4: Division\n"
           "5: Factorial\n"
           "6: Quit\n ");
    scanf("%c", &vol);



    switch(vol)
    {
        case '1':
            printf("You choose Addition\n");
            printf("Enter two numbers:");
            scanf("%d %d",&num1, &num2);
            Add=num1+num2;
            printf("%d\n",Add);
            break;

        case '2':
            printf("You choose Subtraction\n");
            printf("Enter two numbers:");
            scanf("%d %d",&num1, &num2);
            Sub=num1-num2;
            printf("%d\n",Sub);
            break;

        case '3':
            printf("You choose Multiplication\n");
            printf("Enter two numbers:");
            scanf("%d %d",&num1, &num2);
            Mul=num1*num2;
            printf("%d\n",Mul);
            break;

        case '4':
            printf("You choose Division\n");
            printf("Enter two numbers:");
            scanf("%d %d",&num1, &num2);
            Div=num1/num2;
            printf("%d\n",Div);
            break;

        case '5':
            printf("You choose Factorial\n");
            printf("Enter a number:");
            scanf("%d",&num1);
            for (i = 1; i <= num1; ++i) {
                fact *= i;
            }
            printf("%d\n",fact);
            break;

        case '6':
            return 0;
    }
    return 0;
}