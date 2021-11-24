/*
 * Programmer: Shayan Mansornia     Date:11/23/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main() {
    int phnum,phfl,cnum,internet;
    int itnetfl;
    char t;
    printf("\nEnter your number:\n");
    scanf("%d",&phnum);

    printf("\nEnter your call type:\n");
    printf("For international call enter (i)\n");
    printf("For local call enter (l)\n");
    scanf(" %c",&t);

    printf("\nEnter the time of your calls and using internet in minute:\n");
    scanf("%d %d",&cnum,&internet);


    if(t == 'i'){
        phfl=cnum*4000;
        itnetfl=internet*1300;
        printf("Your phone bill:   %d\n",phfl);
        printf("Your internet bill:  %d\n",itnetfl);
    }
    else if(t == 'l'){
        phfl=cnum*150;
        itnetfl=internet*800;
        printf("Your phone bill is:   %d\n",phfl);
        printf("Your internet bill is:   %d\n",itnetfl);
    }

    return 0;
}
