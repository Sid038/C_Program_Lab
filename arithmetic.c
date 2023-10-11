#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, difference, product, remainder;
    printf("Enter value of num1 and num2\n");
    scanf("%d%d", &num1,&num2);

    sum=num1+num2;
    difference=sum-num2;
    product=difference*sum;
    remainder=product%difference;

    printf("The addition of numbers is %d\n", sum);
    printf("The difference of numbers is %d\n", difference);
    printf("The multiplication of numbers is %d\n", product);
    printf("The modulus of numbers is %d\n", remainder);

    return 0;
}