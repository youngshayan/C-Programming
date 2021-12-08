/*
 * Programmer: Shayan Mansornia     Date:12/5/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include<string.h>

int main(void)
{
    char c[20];
    printf("Enter a verb:");
    scanf("%s",c);
    int l = strlen(c)-1;
    int j = strlen(c)-2;
    printf("\nLast character is  %c",c[l]);
    printf("\nLast two characters are  %c %c\n",c[j],c[l]);
    if(c[l]=='e'){
        printf("\nPast tense of your entry verb is -->%sd\n",c);
    } else if(c[j] && c[l] =='s'||'gh'){
        printf("\nPast tense of your entry verb is -->%sed\n",c);
    } else {
        printf("The verb may have an irregular past tense");
    }
    return 0;
}