#include <stdio.h>
#include <math.h>//header file for including mathemetical formulas
int main()
{
    int x1, x2, y1, y2;
    float d;
    printf("Enter the coordinates of first point on plane\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the coordinates of second point on plane\n");
    scanf("%d%d", &x2, &y2);

    d= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("The euclidean distance between two points on plane is %.2f\n", d);

    return 0;
}