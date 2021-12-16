/*
 * Programmer: Shayan Mansornia     Date:12/16/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include<stdio.h>
#include<math.h>
void getData(double* principal, int* interest_rate, int* NumYears);

void calculateMonthlyPayment(double principal, int interest_rate,
                             int NumYears, int* NumMonths,
                             double* interest_rate_dec,
                             double* monthly_payment);

void print_information(double principal, int interest_rate,
                       double interest_rate_dec, int NumYears,
                       int NumMonths, double monthly_payment);

int main(void){
    int NumYears,
    NumMonths,
    interest_rate,
    months;
    double principal,
     interest_rate_dec,
     principal_paid,
    interest_paid,
    monthly_payment,
     old_balance,
    new_balance;

    getData(&principal, &interest_rate, &NumYears);

    calculateMonthlyPayment(principal, interest_rate,
                            NumYears, &NumMonths,
                            &interest_rate_dec,
                            &monthly_payment);

    printf("\n");

    print_information( principal, interest_rate,
                       interest_rate_dec, NumYears,
                       NumMonths, monthly_payment);

    for ( old_balance = principal , months = 1; months <= NumMonths; months++)
    {
        interest_paid = (old_balance * interest_rate_dec);
        principal_paid = (monthly_payment - interest_paid);
        new_balance = (old_balance - principal_paid);
        old_balance = new_balance;

    }
    printf("\nTotal amount paid:%12.2lf\n", NumMonths * monthly_payment);
    return 0;
}
void getData(double* principal, int* interest_rate, int* NumYears)
{

    printf("Amount of the loan (Principal)? ");
    scanf("%lf", principal);
    printf("Interest rate per year (per cent)? ");
    scanf("%d", interest_rate);
    printf("Number of years? ");
    scanf("%d", NumYears);
    return;

}
void calculateMonthlyPayment(double principal, int interest_rate,
                             int NumYears, int* NumMonths,
                             double* interest_rate_dec,
                             double* monthly_payment)
{
    double p_value,
    q_value;
    *NumMonths = (NumYears * 12);
    *interest_rate_dec = (((double)interest_rate / 12) / 100);
    p_value =pow((1 + *interest_rate_dec), *NumMonths);
    q_value = (p_value / (p_value - 1));
    *monthly_payment = (principal * *interest_rate_dec * q_value);

    return;
}
void print_information(double principal, int interest_rate, double interest_rate_dec, int NumYears, int NumMonths, double monthly_payment) {

    printf("The amount of the loan:%12.2lf\n", principal);
    printf("Interest rate/year:            %3d\n", interest_rate);
    printf("Number of years:               %3d\n", NumYears);
    printf("Number of months:              %3d\n", NumMonths);
    printf("Monthly payment:               %12.2lf", monthly_payment);

    return;
}