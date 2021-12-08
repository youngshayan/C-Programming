/*
 * Programmer: Shayan Mansornia     Date:12/5/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 * calculating fact
 */
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("\nEnter an integer between 0 and 9 or -1 to quit =>");
    scanf("%d", &n);

    if (n > 9) {
        printf("\n****************");
    printf("\n Invalid entry");
        printf("\n****************");
}
    else if(n==-1){
        return 0;
    }
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("\n******************************");
        printf("\n  Factorial of %d = %d", n, fact);
        printf("\n******************************");
    }

    return 0;
}