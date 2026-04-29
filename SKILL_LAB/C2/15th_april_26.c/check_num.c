#include <stdio.h>
int main()
{
    int i;

    printf("Enter any number :");
    scanf("%d", &i);

    if (i > 0)
    {
        if (i % 2 == 0)
        {
            printf("%d is Even no. !", i);
        }
        else
        {
            printf("%d is Odd no. !", i);
        }
    }

    else if (i < 0)
    {
        printf("%d is Negative no. !", i);
    }

    else
    {
        printf("%d is Zero !", i);
    }

    return 0;
}