/*
 * Programmer: Shayan Mansornia     Date:12/7/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include <string.h>
int check_subsequence (char [], char[]);
int main () {
    int t;
    char s1[100], s2[100];

    printf("\nEnter first string:");
    gets(s1);

    printf("Enter second string:");
    gets(s2);

    if (strlen(s1) < strlen(s2))
        t = check_subsequence(s1, s2);
    else
        t = check_subsequence(s2, s1);

    if (t)
        printf("Second string is subsequence of first string!\n");
    else
        printf("Second string is NOT subsequence of first string!\n");

    return 0;
}

int check_subsequence (char a[], char b[]) {
    int c, d;

    c = d = 0;

    while (a[c] != '\0') {
        while ((a[c] != b[d]) && b[d] != '\0') {
            d++;
        }
        if (b[d] == '\0')
            break;
        d++;
        c++;
    }
    if (a[c] == '\0')
        return 1;
    else
        return 0;
}

