/*
 * Programmer: Shayan Mansornia     Date:12/2/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int error=0;
void sorter(double number[5]);
void sorter2(double number[3]);
double Get_input1(double arr[5]);
double Get_input2(double arr[3]);
void sorter3_copy(double result[] ,double arr1[], double arr2[]);
int main() {
    double arr1[5];
    double arr2[3];
    double arr_result[6];

    printf("\nEnter the first array elements: \n");
    Get_input1( arr1);
    printf("\n___________________________________________\n");

    printf("\nEnter the second array elements: \n");
    Get_input2(arr2);
    printf("\n___________________________________________\n");

    printf ("\nAscending order of numbers in first Array \n");
    sorter(arr1);
    printf("\n___________________________________________\n");

    printf ("\nAscending order of numbers in second Array \n");
    sorter2(arr2);
    printf("\n___________________________________________\n");

    printf ("\n The final array Result:");
    sorter3_copy(arr_result,arr1,arr2);
    return 0;
}

double Get_input1(double arr1[] ){
    int element,dup;
    for (element = 0; element < 5; element++) {
        do { error = 0;
            printf("Enter the %d number: ", element);
            scanf("%lf", &arr1[element]);

            if (element != 0) {
                for (dup = element - 1; dup >=0; dup--)
                {if (arr1[element] == arr1[dup]) {
                        printf("Checked for element=%u  dup=%u :  DUPLICATE!! \a\n", element, dup);
                        element--;}
                }
            }

        } while (error);
    }
}

double Get_input2(double arr1[3]){
    int element,dup;
    for(element=0;element<3;element++)
    {do
        {error = 0;
            printf("Enter the %d number: ",element);
            scanf("%lf",&arr1[element]);


            if(element !=0){
                for(dup=element-1;dup>=0;dup--){
                    if(arr1[element]==arr1[dup]){
                        printf("Checked for element=%u  Duplicate check=%u :  change the number!! \a\n",element,dup);
                        element--;
                    }
                }
            }
        }while(error);
    }
}

void sorter( double number[5]){
    int i ,j;
    double a;
    for (i=0; i<5; ++i)

    {for (j=i+1; j<5; ++j)
        {if (number[i] > number[j]){
            a= number[i];
            number[i] = number[j];
            number[j] = a;}
        }
    }

    for (i=0; i<5; ++i){

        printf ("\n%.2f\n",number[i]);

    }
}
void sorter2( double number[3] ){
    int i ,j;
    double a;
    for (i=0; i<3; ++i)
    {for (j=i+1; j<3; ++j){
        if (number[i] > number[j]){
            a= number[i];
            number[i] = number[j];
            number[j] = a;}
        }
    }
    for (i=0; i<3; ++i){

        printf ("\n%.2f\n",number[i]);

    }
}
void sorter3_copy( double number[6] ,double arr1[5], double arr2[3] ){
    int i ,j;
    double a;
    int b;
    number[0]=arr1[0];
    number[1]=arr1[1];
    number[2]=arr1[2];
    number[3]=arr1[3];
    number[4]=arr1[4];
    for (int k = 0; k <=4 ; k++) {
        for (int l = 0; l <3 ; ++l) {
            if (number[k] != arr2[l]  ){
                number[5] = arr2[l];
            }
        }
    }
    for (i=0; i<6; ++i){for (j=i+1; j<6; ++j)
        {
            if (number[i] > number[j]){
                a= number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    for (i=0; i<6; ++i){
        printf ("\n%.2f\n",number[i]);

    }
}