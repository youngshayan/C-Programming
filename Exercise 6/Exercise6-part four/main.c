/*
 * Programmer: Shayan Mansornia     Date:12/3/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
void Se_Sort(int array[],int n);
int main(){
    int array[20] ;
    int n=0,i;
    do{
        printf("\nEnter number of elements in array:");
        scanf("%d", &n);
        if (n < 1) {
            printf("Error!!!!!!\n");
            while (getchar() == '\n');
        }}while (n < 1);
    printf("Enter your %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("The %d number:", i);
        scanf("%d", &array[i]);
    }
    Se_Sort(array,n);
    return 0;
}
void Se_Sort(int array[], int n)
{
    int i, j, pos, swap;
    for(i = 0; i < (n - 1); i++)
    {
        pos=i;
        for(j = i + 1; j < n; j++)
        {
            if(array[pos]>array[j])
                pos=j;
        }
        if(pos != i)
        {
            swap=array[i];
            array[i]=array[pos];
            array[pos]=swap;
        }
    }
    printf("___________________________________\n");
    printf("\nDescending sorted Array:\n");
    for(i = 0; i < n; i++){
     printf("\n%d\n", array[i]);

    }
    return 0;
}