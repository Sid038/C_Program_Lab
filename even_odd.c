#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value to check for even  or odd\n");
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("The given number is even\n");
    }
    else{
        printf("The given number id odd\n");
    }

    return 0;
}