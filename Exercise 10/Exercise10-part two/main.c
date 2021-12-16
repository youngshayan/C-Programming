/*
 * Programmer: Shayan Mansornia     Date:12/15/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp1 = fopen("c:\\file1.txt", "r");
    FILE *fp2 = fopen("c:\\file2.txt", "r");
    FILE *fp3 = fopen("c:\\file3.txt", "w");
    char c;

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL){
        puts("Could not open files");
        exit(0);
    }

    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);

    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);

    printf("Merged file1.txt and file2.txt into file3.txt");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
