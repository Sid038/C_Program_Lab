#include <stdio.h>
int main()
{
    int choice;
    float radius,length,breadth,side;
    float area,perimeter;

    printf("Select any choice from the following");
    printf("\n 1.Circle");
    printf("\n 2.Square");
    printf("\n 3.Rectangle");
    printf("\n Enter your chhoice");
    scanf("%d",  &choice);

    if(choice==1)
    {
        printf("Enter the radis of circle");
        scanf("%f", &radius);
        area= 3.14*radius*radius;
        perimeter= 2*3.14*radius;
        printf("Area of circle is: %.2f", area);
        printf("Perimeter of Circle is: %.2f", perimeter);
    }
    else if(choice==2)
    {
        printf("Enter the side of square");
        scanf("%f", &side);
        area= side*side;
        perimeter= 4*side;
        printf("Area of square is: %.2f", area);
        printf("Perimeter of square is: %.2f", perimeter);
    }
    else if(choice==3)
    {
        printf("Enter the length of rectangle");
        scanf("%f", &length);
        printf("Enter the breadth of rectangle");
        scanf("%f", &breadth);
        area= length*breadth;
        perimeter= 2*(length+breadth);
        printf("Area of rectangle is: %.2f", area);
        printf("Perimeter of rectangle is: %.2f", perimeter);
    }
    else
    {
        printf("Invalid number");
    }
    return 0;
}