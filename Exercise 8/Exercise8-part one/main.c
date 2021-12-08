/*
 * Programmer: Shayan Mansornia     Date:12/8/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include <string.h>
void combination1 (char []);
void combination2 (char [], int);
char outc[20];
int comb_size=0,str_len,fixer_in=0,fixer_movement,comb_num;
int main()
{
    char a[20];

    printf ("Enter the characters:\n");
    scanf ("%[^\n]%*c",a);
    printf("\n\n");

    str_len=strlen(a);
    combination1 (a);
    return 0;
}

void combination1 (char a[])
{
    comb_num =0;
    ++comb_size;
    fixer_movement=str_len-comb_size+1;
    if (comb_size>str_len)
        return;
    else{
        printf ("\nThe combinations of size %d are : \n",comb_size);
        combination2 (a,0);
        --fixer_in;
        combination1 (a);

        return;
    }
}

void combination2 (char a[],int k)
{
    ++fixer_in;
    int fixer_out=fixer_in,i;
    if (fixer_in>comb_size){
        ++comb_num;
        printf("%d)   { %s }\n",comb_num,outc);
        return;
    }

    else{
        for(i=k;i<fixer_movement;i++){

            outc[fixer_out-1]=a[i+fixer_out-1];
            combination2 (a,i);
            --fixer_in;
        }
        return;
    }
}