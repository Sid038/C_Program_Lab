#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter the alphabet to check for vowel or consonant\n");
    scanf("%c", &alpha);

    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
    {
        printf("the given character is vowel");
    }
    else
    {
        printf("the gin alphabet is a cosonant");
    }

    return 0;
}