/*
 * Programmer: Shayan Mansornia     Date:12/4/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#define ver 10
#define hor 10
int main(void)
{
    int r ,c;
    int Num_Table[ver][hor];
    printf("\n       6       7        8       9      10\n");
    for (int i = 5; i <hor ; ++i) {
        r=i+1;
        printf("%2d ",r);
        for (int j = 6; j <=ver ; ++j) {
            c=j;
            Num_Table[i][j]=r*c;
            printf("  %4d  ",Num_Table[i][j]);
        }
        printf("\n");
    }
    return 0;
}