#include <stdio.h>
int main()
{
    float r;//radius of circle
    float s;//side of square
    float l,b;//length and breadth of rectangle

    //circle
    printf("Finding area and perimeter of circle\n");
    printf("Enter radius of circle\n");
    scanf("%f",&r);
    printf("The area of circle is %.2f\n", 3.14*r*r);
    printf("The perimeter of circle is %.2f\n", 2*3.14*r);

    //square
    printf("Finding area and perimeter of square\n");
    printf("Enter side of square\n");
    scanf("%f",&s);
    printf("The area of square is %.2f\n", s*s);
    printf("The perimeter of square is %.2f\n", 4*s);

    //rectangle
    printf("Finding area and perimeter of rectangle\n");
    printf("Enter length of rectangle\n");
    scanf("%f", &l);
    printf("Enter breadth of rectangle\n");
    scanf("%f", &b);
    printf("The area of rectangle is %.2f\n", l*b);
    printf("The perimeter of rectangle is %.2f\n", 2*(l+b));

    return 0;
}