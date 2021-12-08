/*
 * Programmer: Shayan Mansornia     Date:12/8/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include <string.h>
int display(char*);
int replace_first(char*, char*, char*);

void main()
{
    char str[80];
    printf("\nEnter binary code:\n");
    scanf("%s", str);
    display(str);
}
int display(char *string)
{
    char stringA[80], stringB[80];
    if(replace_first(string, stringA, stringB) == 0)
    {
        printf("\n%s\n", string);
        return 0;
    }
    display(stringB);
    display(stringA);
    return 0;
}

int replace_first(char *inputstring, char *outstringA, char *outstringB)
{
    char *pch;
    pch = strchr(inputstring, 'x');
    while(pch != NULL)
    {
        *pch = '1';
        strcpy(outstringA, inputstring);
        *pch = '0';
        strcpy(outstringB, inputstring);
        return 1;
    }
    return 0;
}