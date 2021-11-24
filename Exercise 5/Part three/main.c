/*
 * Programmer: Shayan Mansornia     Date:11/24/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
int main() {
    int base, altitude,hight,sbase,r ,areaparallelogram,areatriangle,areatrapezium,areacircle;
    char op;

    printf("\n(1)Area of a parallelogram\n"
           "(2)Area of a triangle\n"
           "(3)Area of a trapezoid\n"
           "(4)Area of a circle\n"
           "(5)QUIT\n");
    scanf(" %c",&op);

    switch (op)
    {
        case '1':
            printf("Enter base and altitude: \n ");
            scanf("%d %d",&base,&altitude);
            areaparallelogram = base * altitude;
            printf("Area of Parallelogram is: %d\n", areaparallelogram);
            break;
        case '2':
            printf("Enter the height and base of the Triangle:\n");
            scanf("%d %d",&hight,&base);
            areatriangle = (hight*base)/2;
            printf("Area of the triangle is: %d\n", areatriangle);
            break;
        case '3':
            printf("Enter the value for two bases & height of the trapezium: \n");
            scanf("%d %d %d",&base,&sbase,&hight);
            areatrapezium = 0.5 * (base + sbase) * hight ;
            printf("Area of the trapezium is: %d\n", areatrapezium);
            break;
        case '4':
            printf("Enter the radius of a circle\n");
            scanf("%d",&r);
            areacircle = 3.14159*r*r;
            printf("Area of the circle is: %d\n", areacircle);
            break;
        case '5':
            return 0;

    }

    return 0;
}