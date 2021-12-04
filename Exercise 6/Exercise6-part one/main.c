/*
 * Programmer: Shayan Mansornia     Date:11/29/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *barcode scanner
 */
#include <stdio.h>
void Barcode_Checker (int UPS[12] );

int main() {
    int i;

    int UPC_code[12]={0,0,0,0,0,0,0,0,0,0,0,0};

    printf ("\nPlease enter your barcode digits in row\n");
    for (i=0;i<11;i++)
    {

        printf("\nEnter the %d digit:\a",i);scanf("%d",&UPC_code[i]);


        if (UPC_code[i]>=10)
        { UPC_code[i]=0;
            printf("Error please try again\n");

            i=i-1;
        }

    }

    printf("\nEnter the 11 digit:");
    scanf("%d",&UPC_code[11]);
    Barcode_Checker(UPC_code);

    return 0;
}

void Barcode_Checker(int UPC_code[12] ){
    int sum_odd , sum_even , last_digit , check_digit ;

    sum_odd=(UPC_code[0]+UPC_code[2]+UPC_code[4]+UPC_code[6]+UPC_code[8]+UPC_code[10])*3;

    sum_even=(UPC_code[1]+UPC_code[3]+UPC_code[5]+UPC_code[7]+UPC_code[9])+sum_odd;

    last_digit=sum_even%10;

    if (last_digit==0) {
        check_digit = 0;
    }
    else {
        check_digit =9-(last_digit-1);

    }

    if (check_digit==UPC_code[11])
    {

        printf("\nThe checked digit (%d) is equal to : %d\n",check_digit,UPC_code[11]);
        printf("\n Great the UPC Barcode (%d %d%d%d%d%d %d%d%d%d%d %d) is Valid!\n",UPC_code[0],UPC_code[1],UPC_code[2],UPC_code[3],UPC_code[4],UPC_code[5],UPC_code[6],UPC_code[7],UPC_code[8],UPC_code[9],UPC_code[10],UPC_code[11]);

    }
    else{
        printf("The checked digit (%d) is not equal to : %d\n",check_digit,UPC_code[11]);
        printf("\n \a Oh sorry the UPC Barcode (%d %d%d%d%d%d %d%d%d%d%d %d) is  invalid please try again!\n",UPC_code[0],UPC_code[1],UPC_code[2],UPC_code[3],UPC_code[4],UPC_code[5],UPC_code[6],UPC_code[7],UPC_code[8],UPC_code[9],UPC_code[10],UPC_code[11]);
    }

}

