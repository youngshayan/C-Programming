/*
 * Programmer: Shayan Mansornia     Date:12/1/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 * vote counter
 */
#include <stdio.h>
int main (void) {
    int votes, allvotes, candidate_a, candidate_b, candidate_c, candidate_d;
    int first_a, second_a, third_a, fourth_a, fifth_a;
    int first_b, second_b, third_b, fourth_b, fifth_b;
    int first_c, second_c, third_c, fourth_c, fifth_c;
    int sum_a, sum_b, sum_c, total_sum;
    float percantage_a, percantage_b, percantage_c;
    printf("\nEnter the votes for candidate A in 5 cities ---->");
    printf("\nFirst city:");
    scanf("%d", &first_a);
    printf("Second city:");
    scanf("%d", &second_a);
    printf("Third city:");
    scanf("%d", &third_a);
    printf("Fourth city:");
    scanf("%d", &fourth_a);
    printf("Fifth city:");
    scanf("%d", &fifth_a);
    printf("\n______________________________________________\n");

    printf("\nEnter the votes for candidate B in 5 cities ---->");
    printf("\nFirst city:");
    scanf("%d", &first_b);
    printf("Second city:");
    scanf("%d", &second_b);
    printf("Third city:");
    scanf("%d", &third_b);
    printf("Fourth city:");
    scanf("%d", &fourth_b);
    printf("Fifth city:");
    scanf("%d", &fifth_b);
    printf("\n______________________________________________\n");

    printf("\nEnter the votes for candidate C in 5 cities ---->");
    printf("\nFirst city:");
    scanf("%d", &first_c);
    printf("Second city:");
    scanf("%d", &second_c);
    printf("Third city:");
    scanf("%d", &third_c);
    printf("Fourth city:");
    scanf("%d", &fourth_c);
    printf("Fifth city:");
    scanf("%d", &fifth_c);
    printf("\n______________________________________________\n");

    sum_a = first_a + second_a + third_a + fourth_a + fifth_a;
    printf("\nThe candidate A total votes is %d", sum_a);

    sum_b = first_b + second_b + third_b + fourth_b + fifth_b;
    printf("\nThe candidate B total votes is %d", sum_b);

    sum_c = first_c + second_c + third_c + fourth_c + fifth_c;
    printf("\nThe candidate C total votes is %d", sum_c);

    total_sum = sum_a + sum_b + sum_c;
    printf("\nTotal votes:%d", total_sum);
    printf("\n______________________________________________\n");

    percantage_a = (float) sum_a / total_sum * 100;
    printf("\nThe percentage of candidate A votes is: %.2f%%", percantage_a);

    percantage_b = (float) sum_b / total_sum * 100;
    printf("\nThe percentage of candidate B votes is: %.2f%%", percantage_b);

    percantage_c = (float )sum_c / total_sum * 100;
    printf("\nThe percentage of candidate C votes is: %.2f%%", percantage_c);

    printf("\n______________________________________________\n");

    if (percantage_a >= 30) {
        printf("\nThe candidate A is winner of the election!");
    } else if (percantage_b >= 30) {
        printf("\nThe candidate B is winner of the election!");
    } else if (percantage_c >= 30) {
        printf("\nThe candidate C is winner of the election!");
    } else if (percantage_a , percantage_b , percantage_c < 30) {
        printf("\nAnother election must be start!");
    }

    return 0;
}
