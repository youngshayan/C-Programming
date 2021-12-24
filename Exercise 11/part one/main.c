#include <stdio.h>
#include "BSORT.h/BSORT.h"
#include "BSORT.h/BSORT.c"
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

int main()
{
    int lower = 0, upper = 100, count = 1;
    int x[Max_size];
    srand(time(0));

    printRandoms(lower, upper, count,x);
    printf("\n\n__________________________________________________________________________________________________________\n\n");
    bubbleSort(x,Max_size);
    printArray(x,Max_size);
    return 0;
}
