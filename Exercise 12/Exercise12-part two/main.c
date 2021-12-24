/*
 * Programmer: Shayan Mansornia     Date:12/22/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include "POSTFIX/postfix.c"
#define Max_postfix_element_size 30
int main(){
    char exp[Max_postfix_element_size];
    printf("Enter the postfix element : \n");
    printf(">>");gets(exp);
    printf("\n_______________________________________\n");
    printf("The Postfix Result : ");
    printf ("|%d|", evaluatePostfix(exp));
    return 0;
}