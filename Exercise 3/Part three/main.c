/*
 * Programmer: Shayan Mansornia     Date:11/15/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *exercise timetable
 */
#include <stdio.h>
int main(void) {
    int age, weight;

    printf("\nEnter your age:");
    scanf("%d", &age);

    printf("\nEnter your weight:");
    scanf("%d", &weight);
    printf("\nYour exercise timetable based on your age and weight is:\n");

    if(age<=20 && weight<=60) {
        printf(" 2 hours daily workout - Hiking once a week -  play volleyball or basketball twice a week");
    }
    else if (age<=20 && weight<=80) {
        printf(" 4 hours daily workout - Hiking twice a week - play Tennis 3 hours a week - Swim twice a week");
    }
    else if (age<=30 && weight<=60) {
        printf(" 1 hours daily workout - Hiking once a week - swim twice a week - Go on easy diet");
    }
    else if (age<=30 && weight<=80) {
        printf("1 hours daily workout  - Hiking once a week - swim twice a week - Go on hard diet");
    }
    else if (age<=40 && weight<=60) {
        printf("1 hours daily workout  - Hiking twice a month - swim three times a week - Walk twice a week");
    }
    else if (age<=40 && weight<=80) {
        printf("1 hours daily workout - Hiking three times a month - swim three times a week - Walk every day");
    }
    else if (age<=50 && (weight<=60 || 80)) {
        printf("1 hours daily workout - Stretching 1 hour every day - swim twice a week - Walk every day - Go on balanced diet");
    } else
        printf("1 hours daily workout - Stretching every day - swim twice a week - Climbing once a week - Walk every day - Go on balanced diet");

    return (0);
}

