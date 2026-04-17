#include <stdio.h>
int main()
{
    int i;

    printf("Enter any number :");
    scanf("%d", &i);

    if (i > 0)
    {
        if (i < 0)
    {
        printf("%d is Smaller than 0 !", i);
    }
    else
    {
        printf("%d is Zero !", i);
    }
        printf("%d is Greater than 0 !", i);
    }
    else 
    return 0;
}