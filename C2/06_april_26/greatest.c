#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first no. :");
    scanf("%d", &a);

    printf("Enter second no. :");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greatest no. ", a);
    }
    else if (b > a)
    {
        printf("%d is greatest no.", b);
    }
    else
    {
        printf("%d and %d both no. are equal", a, b);
    }

    return 0;
}
