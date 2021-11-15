/*
 * Programmer: Shayan Mansornia     Date:11/14/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main(void) {
    int a;
    char ch;
    float radius,length,width,side,perimeter_sq,area_sq,area_rec,perimeter_rec,area_cr,perimeter_cr;
    printf("\nEnter a character and number:\n");
    scanf("%d %c",&a,&ch);
    printf("Your shape is:");

    if(a==1 && ch=='m') {
        printf("\nSquare perimeter");
        printf("\nEnter side of square:");
        scanf("%f", &side);
        perimeter_sq = 4 * side;
        printf("perimeter of square is= %f\n", perimeter_sq);
    }
    else if(a==1 && ch=='n') {
        printf("\nSquare area");
        printf("\nEnter length of side of square:");
        scanf("%f", &side);
        area_sq = side * side;
        printf("Area of square is= %f\n",area_sq);
    }
    else if(a==2 && ch=='n') {
        printf("\nRectangle perimeter");
        printf("\nEnter length of the rectangle:");
        scanf("%f", &length);
        printf("\nEnter width of the rectangle:");
        scanf("%f", &width);
        perimeter_rec = 2 * (length + width);
        printf("Perimeter of rectangle is= %f\n", perimeter_rec);
    }
    else if(a==2 && ch=='m') {
        printf("\nrectangle area");
        printf("\nEnter the Length of Rectangle: ");
        scanf("%f", &length);
        printf("\nEnter the Breadth of Rectangle: ");
        scanf("%f", &width);
        area_rec = length * width;
        printf("Area of Rectangle is= %f\n", area_rec);
    }
    else if(a==3 && ch=='n') {
        printf("\nCircle perimeter");
        printf("\nEnter radius of the Circle:");
        scanf("%f",&radius);
        perimeter_cr = 2*3.14*radius;
        printf("Perimeter of the Circle is= %f\n",perimeter_cr);
    }
    else if(a==3 && ch=='m'){
        printf("\nCircle area");
        printf("\nEnter radius of the Circle:");
        scanf("%f",&radius);
        area_cr=3.14*radius*radius;
        printf("Area of the Circle is= %f\n",area_cr);
    } else
        printf("\nunknown ----- Try another character or number\n");
    return 0;
}

