/*
 * Programmer: Shayan Mansornia     Date:11/22/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *calculating shopping expenses
 */
#include <stdio.h>
int main() {
    double total_money,count_shop,pay,number_shop;
    printf("\nEnter your account balance:");
    scanf("%lf",&total_money);

    /* calculating each shopping expense */
    number_shop=0;
while(pay <total_money) {
    printf("\nEnter your payments:");
    scanf("%lf", &pay);
    total_money = total_money - pay;
    number_shop +=1;

}

    printf("\nCount of your shopping is %lf",number_shop);
    printf("\nYour final account balance is %lf\n" ,total_money);
    return 0;
}