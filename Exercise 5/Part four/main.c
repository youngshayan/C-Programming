/*
 * Programmer: Shayan Mansornia     Date:11/24/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main() {
    int month,year,pnum,over=0,normaluse,final,intuse;

    printf("\nWelcome to Internet Lite Corporation\n");
    printf("Enter month and year:\n");
    scanf("%d %d",&month,&year);
    printf("Enter your number:\n");
    scanf("%d",&pnum);
    printf("Enter your connection time:\n");
    scanf("%d",&intuse);


    if(intuse<=10){
        normaluse=intuse*7.99;
        printf("\nYour connection time:%d hours\n internet bill:%d$\n",intuse,normaluse);
    }
    else if (intuse>10){
        over=intuse-10;
        over=over*1.99;
        normaluse=intuse*7.99;
        final=over+normaluse;
        printf("\nYour connection time:%d hours\n Normal internet bill:%d$\n over used:%d$ \n final bill:%d$\n",intuse,normaluse,over,final);
    }

    return 0;
}