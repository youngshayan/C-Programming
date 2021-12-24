/*
 * Programmer: Shayan Mansornia     Date:12/22/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include "BSORTD.h/BSORTD.h"
#include "BSORTD.h/BSORTD.c"
#include <stdlib.h>
#include <time.h>
#define Max_size 100
void printRandoms(int lower, int upper,
                  int count,int x[Max_size]){
    int num[Max_size];
    int i;
    for (i = 0; i < count; i++) {

        for (int j = 0; j <Max_size ; ++j) {
            num[j] = (rand() % (upper - lower + 1)) + lower;
            x[j]=num[j];
            printf("%d\t",x[j]);
        }
    }
}
int main(){
    int lower = 0, upper = 100, count = 1;
    int x[Max_size];
    srand(time(0));
    printRandoms(lower, upper, count,x);
    printf("\n\n__________________________________________________________________________________________________________\n\n");
    bubbleSortD(x,Max_size);
    printArray(x,Max_size);
    return 0;
}
