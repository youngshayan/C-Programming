/*
 * Programmer: Shayan Mansornia     Date:12/14/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 * An iron manufacturing company maintains data about all of its employees
 */
#include<stdio.h>
#include<string.h>
main(){
    int i,j,n;
    char str[100][100],s[100];
    printf("Enter number of employees:\n");
    scanf("%d",&n);
    printf("Enter their information in order of city-name-lastname:\n");
    printf("For example: Tehran-shayan-mansornia\n");
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
        }
    }
    printf("\nThe sorted order of list:\n");
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
}